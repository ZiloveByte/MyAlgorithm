#include "linklist.cpp"
int main() {
    Node *h; 
    ElemType e;
    InitList(h);
    cout << "1) 初始化单链表h\n";
    ElemType a[] = {'a', 'b', 'c', 'd', 'e'};
    CreateListTail(h, a, 5);
    cout << "2) 依次采用尾插法插入a,b,c,d,e元素\n";
    cout << "3) 输出单链表h: "; 
    DispList(h);
    cout << "4) 单链表h的长度: " << ListLength(h) << "\n";
    cout << "5) 单链表h是否为空: " << (h->next == nullptr ? "是" : "否") << "\n";
    GetElem(h, 3, e);
    cout << "6) 输出单链表h的第3个元素: " << e << "\n";
    cout << "7) 输出元素a的位置: " << LocateElem(h, 'a') << "\n";
    ListInsert(h, 4, 'f');
    cout << "8) 在第4个元素的位置上插入f元素\n";
    cout << "9) 输出单链表h: "; 
    DispList(h);
    ListDelete(h, 3, e);
    cout << "10) 删除单链表h的第3个元素 (元素" << e << "已删除)\n";
    cout << "11) 输出单链表h: "; 
    DispList(h);
    DestroyList(h);
    cout << "12) 释放单链表h\n";
    return 0;
}