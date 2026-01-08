#include <iostream>
using namespace std;
struct SqStack {
    char data[100];
    int top;
};
void InitStack(SqStack *&s) {
    s = new SqStack;
    s->top = -1;
}
bool StackEmpty(SqStack *s) {
    return s->top == -1;
}
void Push(SqStack *&s, char e) {
    s->data[++(s->top)] = e;
}
void Pop(SqStack *&s, char &e) {
    e = s->data[(s->top)--];
}
void DestroyStack(SqStack *&s) {
    delete s;
}
int main() {
    SqStack *s; char e;
    InitStack(s);
    cout << "1) 初始化栈s\n";
    cout << "2) 栈s非空吗？" << (!StackEmpty(s) ? "是" : "否") << "\n";
    Push(s, 'a'); Push(s, 'b'); Push(s, 'c'); Push(s, 'd'); Push(s, 'e');
    cout << "3) 依次进栈a,b,c,d,e\n";
    cout << "4) 栈s非空吗？" << (!StackEmpty(s) ? "是" : "否") << "\n";
    cout << "5) 出栈序列：";
    while (!StackEmpty(s)) {
        Pop(s, e); cout << e << " ";
    }
    cout<<"\n";
    cout << "6) 栈s非空吗？" << (!StackEmpty(s) ? "是" : "否") << "\n";
    DestroyStack(s);
    cout << "7) 释放栈\n";
    return 0;
}