#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

struct DSU{
    vector<size_t> pa,size;
    explicit DSU(size_t size_):pa(size_),size(size_,1){
        iota(pa.begin(),pa.end(),0);
    }
    size_t find(size_t x){
        return pa[x]==x?x:pa[x]=find(pa[x]);
    }
    void unite(size_t x,size_t y){
        x=find(x),y=find(y);
        if(x==y) return;
        if(size[x]<size[y]) swap(x,y);
        pa[y]=x;
        size[x]+=size[y];
    }
};
 
void solve() {
    i64 n,m,p;
    cin>>n>>m>>p;
    DSU dsu(n+1);
    for(int i=0;i<m;i++){
        i64 val1,val2;
        cin>>val1>>val2;
        dsu.unite(val1,val2);
    }
    for(int i=0;i<p;i++){
        i64 val1,val2;
        cin>>val1>>val2;
        if(dsu.find(val1)==dsu.find(val2)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}