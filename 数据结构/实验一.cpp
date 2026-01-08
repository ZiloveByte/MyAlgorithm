#include <iostream>
using namespace std;
#define MaxSize 100
typedef char ElemType;
struct SqList {
    ElemType data[MaxSize];
    int length;
};
void InitList(SqList *&L) {
    L = new SqList;
    L->length = 0;
}
bool ListInsert(SqList *&L, int i, ElemType e) {
    if (i < 1 || i > L->length + 1) return false;
    for (int j = L->length; j >= i; j--) L->data[j] = L->data[j - 1];
    L->data[i - 1] = e;
    L->length++;
    return true;
}
void DispList(SqList *L) {
    for (int i = 0; i < L->length; i++) cout << L->data[i] << " ";
    cout << "\n";
}
bool ListDelete(SqList *&L, int i, ElemType &e) {
    if (i < 1 || i > L->length) return false;
    e = L->data[i - 1];
    for (int j = i; j < L->length; j++) L->data[j - 1] = L->data[j];
    L->length--;
    return true;
}
int LocateElem(SqList *L, ElemType e) {
    int i = 0;
    while (i < L->length && L->data[i] != e) i++;
    return (i >= L->length) ? 0 : i + 1;
}
int main() {
    SqList *L; ElemType e;
    InitList(L);
    cout << "1)初始化顺序表L\n";
    ListInsert(L, 1, 'a'); ListInsert(L, 2, 'b'); ListInsert(L, 3, 'c'); ListInsert(L, 4, 'd'); ListInsert(L, 5, 'e');
    cout << "2)依次插入a,b,c,d,e\n";
    cout << "3)输出顺序表L："; DispList(L);
    cout << "4)顺序表长度：" << L->length << "\n";
    cout << "5)顺序表为空吗：" << (L->length == 0 ? "是" : "否") << "\n";
    cout << "6)第3个元素：" << L->data[2] << "\n";
    cout << "7)元素a的位置：" << LocateElem(L, 'a') << "\n";
    ListInsert(L, 4, 'f');
    cout << "8)在第4个位置插入f\n";
    cout << "9)输出顺序表L："; DispList(L);
    ListDelete(L, 3, e);
    cout << "10)删除第3个元素\n";
    cout << "11)输出顺序表L："; DispList(L);
    delete L;
    cout << "12)释放顺序表L\n";
    return 0;
}