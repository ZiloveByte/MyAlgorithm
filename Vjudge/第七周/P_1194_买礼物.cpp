#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;

struct DSU{
    vector<int> fa;
    DSU(int n):fa(n+1){
        iota(fa.begin(),fa.end(),0);
    }
    int get(int x){
        while(x!=fa[x]){
            x=fa[x]=fa[fa[x]];
        }
        return x;
    }
    bool merge(int x,int y){
        x=get(x),y=get(y);
        if(x==y) return false;
        fa[y]=x;
        return true;
    }
    bool same(int x,int y){
        return get(x)==get(y);
    }
};

struct Tree{
    using TII=tuple<int,int,int>;
    int n;
    priority_queue<TII,vector<TII>,greater<TII>> ver;
    Tree(int n){
        this->n=n;
    }
    void add(int x,int y,int w){
        ver.emplace(w,x,y);
    }
    ll kruskal(){
        DSU dsu(n);
        ll ans=0;
        int cnt=0;
        while(ver.size()){
            auto [w,x,y]=ver.top();
            ver.pop();
            if(dsu.same(x,y)) continue;
            dsu.merge(x,y);
            ans+=w;
            cnt++;
            if(cnt==n-1) break;
        }
        return ans;
    }
};

void Nuyoah(){
    int A,B;
    cin>>A>>B;
    vector<vector<int>> K(B+1,vector<int>(B+1,0));
    for(int i=1;i<=B;i++){
        for(int j=1;j<=B;j++){
            cin>>K[i][j];
        }
    }
    Tree g(B+1);
    for(int i=1;i<=B;i++) g.add(0,i,A);
    for(int i=1;i<=B;i++){
        for(int j=i+1;j<=B;j++){
            if(K[i][j]!=0) g.add(i,j,K[i][j]);
        }
    }
    cout<<g.kruskal()<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}