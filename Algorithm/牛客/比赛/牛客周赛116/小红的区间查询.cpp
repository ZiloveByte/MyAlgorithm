#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

struct node{
    ll l,r;
    int id;
};

bool cmp(node a,node b){
    return a.l<b.l;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,q;
    cin>>n>>q;
    vector<node> seg(n);
    for(int i=0;i<n;i++) {
        cin>>seg[i].l>>seg[i].r;
        seg[i].id=i+1;
    }
    sort(seg.begin(),seg.end(),cmp);
    vector<ll> L(n);
    for(int i=0;i<n;i++) L[i]=seg[i].l;
    while(q--){
        ll val;
        cin>>val;
        int pos=upper_bound(L.begin(),L.end(),val)-L.begin()-1;
        if(pos>=0&&val<=seg[pos].r) cout<< seg[pos].id<<"\n";
        else cout<<"-1\n";
    }
}