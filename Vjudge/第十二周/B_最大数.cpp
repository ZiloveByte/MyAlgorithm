#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

const int MAXN = 200000;
int tree[4 * MAXN];

void update(int idx, int val, int node = 1, int l = 0, int r = MAXN - 1) {
    if (l == r) {
        tree[node] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (idx <= mid) update(idx, val, node * 2, l, mid);
    else update(idx, val, node * 2 + 1, mid + 1, r);
    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

int query(int ql, int qr, int node = 1, int l = 0, int r = MAXN - 1) {
    if (ql <= l && r <= qr) return tree[node];
    int mid = (l + r) / 2;
    int res = 0;
    if (ql <= mid) res = query(ql, qr, node * 2, l, mid);
    if (qr > mid) res = max(res, query(ql, qr, node * 2 + 1, mid + 1, r));
    return res;
}

void solve() {
    i64 m,d,t=0,n=0;
    cin>>m>>d;
    while(m--){
        char op;
        i64 x;
        cin>>op>>x;
        if(op=='A'){
            x=(x+t)%d;
            update(n++,x);
        }else{
            t=query(n-x,n-1);
            cout<<t<<"\n";
        }
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}