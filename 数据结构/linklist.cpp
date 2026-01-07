#include <iostream>
using namespace std;
typedef char ElemType;
struct Node {
    ElemType data;
    Node *next;
};
void InitList(Node *&h) {
    h = new Node;
    h->next = nullptr;
}
void CreateListTail(Node *&h, ElemType a[], int n) {
    Node *r = h;
    for (int i = 0; i < n; i++) {
        Node *s = new Node;
        s->data = a[i];
        r->next = s;
        r = s;
    }
    r->next = nullptr;
}
void DispList(Node *h) {
    Node *p = h->next;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
}
int ListLength(Node *h) {
    int n = 0;
    Node *p = h->next;
    while (p != nullptr) {
        n++;
        p = p->next;
    }
    return n;
}
bool GetElem(Node *h, int i, ElemType &e) {
    int j = 0;
    Node *p = h;
    while (j < i && p != nullptr) {
        j++;
        p = p->next;
    }
    if (p == nullptr) return false;
    e = p->data;
    return true;
}
int LocateElem(Node *h, ElemType e) {
    int i = 1;
    Node *p = h->next;
    while (p != nullptr && p->data != e) {
        p = p->next;
        i++;
    }
    return (p == nullptr) ? 0 : i;
}
bool ListInsert(Node *&h, int i, ElemType e) {
    int j = 0;
    Node *p = h;
    while (j < i - 1 && p != nullptr) {
        j++;
        p = p->next;
    }
    if (p == nullptr) return false;
    Node *s = new Node;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
bool ListDelete(Node *&h, int i, ElemType &e) {
    int j = 0;
    Node *p = h;
    while (j < i - 1 && p != nullptr) {
        j++;
        p = p->next;
    }
    if (p == nullptr || p->next == nullptr) return false;
    Node *q = p->next;
    e = q->data;
    p->next = q->next;
    delete q;
    return true;
}
void DestroyList(Node *&h) {
    Node *pre = h, *p = h->next;
    while (p != nullptr) {
        delete pre;
        pre = p;
        p = p->next;
    }
    delete pre;
}