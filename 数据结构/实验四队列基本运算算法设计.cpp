#include <iostream>
using namespace std;
typedef char ElemType;
struct DataNode {
    ElemType data;
    DataNode *next;
};
struct LinkQueue {
    DataNode *front;
    DataNode *rear;
};
void InitQueue(LinkQueue *&q) {
    q = new LinkQueue;
    q->front = q->rear = nullptr;
}
bool QueueEmpty(LinkQueue *q) {
    return q->front == nullptr;
}
void EnQueue(LinkQueue *&q, ElemType e) {
    DataNode *p = new DataNode;
    p->data = e;
    p->next = nullptr;
    if (q->rear == nullptr) q->front = q->rear = p;
    else {
        q->rear->next = p;
        q->rear = p;
    }
}
bool DeQueue(LinkQueue *&q, ElemType &e) {
    if (q->front == nullptr) return false;
    DataNode *t = q->front;
    e = t->data;
    if (q->front == q->rear) q->front = q->rear = nullptr;
    else q->front = q->front->next;
    delete t;
    return true;
}
void DestroyQueue(LinkQueue *&q) {
    DataNode *p = q->front, *r;
    while (p != nullptr) {
        r = p->next;
        delete p;
        p = r;
    }
    delete q;
}
int main() {
    LinkQueue *q;
    ElemType e;
    InitQueue(q);
    cout << "1)初始化链队q\n";
    cout << "2)链队q为空吗？" << (QueueEmpty(q) ? "是" : "否") << "\n";
    EnQueue(q, 'a'); EnQueue(q, 'b'); EnQueue(q, 'c');
    cout << "3)依次进链队元素a,b,c\n";
    if (DeQueue(q, e)) cout << "4)出队一个元素：" << e << "\n";
    EnQueue(q, 'd'); EnQueue(q, 'e'); EnQueue(q, 'f');
    cout << "5)依次进链队元素d,e,f\n";
    cout << "6)出队序列：";
    while (!QueueEmpty(q)) {
        DeQueue(q, e);
        cout << e << " ";
    }
    cout << "\n";
    DestroyQueue(q);
    cout << "7)释放链队\n";
    return 0;
}