#include <iostream>
#include <stack>
using namespace std;
typedef char ElemType;
struct BTNode {
    ElemType data;
    BTNode *lchild, *rchild;
};
void CreateBTree(BTNode *&b, const char *str) {
    stack<BTNode*> st;
    BTNode *p = nullptr;
    int k;
    b = nullptr;
    const char *t = str;
    while (*t != '\0') {
        switch (*t) {
            case '(': st.push(p); k = 1; break;
            case ')': st.pop(); break;
            case ',': k = 2; break;
            default:
                p = new BTNode;
                p->data = *t;
                p->lchild = p->rchild = nullptr;
                if (b == nullptr) b = p;
                else {
                    if (k == 1) st.top()->lchild = p;
                    else st.top()->rchild = p;
                }
        }
        t++;
    }
}
void DispBTree(BTNode *b) {
    if (b != nullptr) {
        cout << b->data;
        if (b->lchild != nullptr || b->rchild != nullptr) {
            cout << "(";
            DispBTree(b->lchild);
            if (b->rchild != nullptr) cout << ",";
            DispBTree(b->rchild);
            cout << ")";
        }
    }
}
BTNode* FindNode(BTNode *b, ElemType x) {
    if (b == nullptr) return nullptr;
    if (b->data == x) return b;
    BTNode *p = FindNode(b->lchild, x);
    if (p != nullptr) return p;
    return FindNode(b->rchild, x);
}
int BTHeight(BTNode *b) {
    if (b == nullptr) return 0;
    int lchildh = BTHeight(b->lchild);
    int rchildh = BTHeight(b->rchild);
    return (lchildh > rchildh) ? (lchildh + 1) : (rchildh + 1);
}
void DestroyBTree(BTNode *&b) {
    if (b != nullptr) {
        DestroyBTree(b->lchild);
        DestroyBTree(b->rchild);
        delete b;
        b = nullptr;
    }
}
int main() {
    BTNode *b;
    const char *str = "A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))";
    CreateBTree(b, str);
    cout << "1)创建二叉链存储结构b\n";
    cout << "2)输出二叉树b:";
    DispBTree(b);
    cout << "\n";
    BTNode *h = FindNode(b, 'H');
    if (h) {
        cout << "3)'H'结点的左孩子:" << (h->lchild ? h->lchild->data : ' ') << " 右孩子:" << (h->rchild ? h->rchild->data : ' ') << "\n";
    }
    cout << "4)二叉树b的高度:" << BTHeight(b) << "\n";
    DestroyBTree(b);
    cout << "5)释放二叉树b\n";
    return 0;
}