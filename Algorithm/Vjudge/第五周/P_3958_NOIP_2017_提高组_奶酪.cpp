#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct DSU{
    vector<int> fa,p,e,f;
    DSU(int n){
        fa.resize(n+1);
        iota(fa.begin(),fa.end(),0);
        p.resize(n+1,1);
        e.resize(n+1);
        f.resize(n+1);
    }
    int get(int x){
        while(x!=fa[x]){
            x=fa[x]=fa[fa[x]];
        }
        return x;
    }
    bool merge(int x,int y){
        if(x==y) f[get(x)]=1;
        x=get(x),y=get(y);
        e[x]++;
        if(x==y) return false;
        if(x<y) swap(x,y);
        fa[y]=x;
        f[x]|=f[y],p[x]+=p[y],e[x]+=e[y];
        return true;
    }
    bool same(int x,int y){
        return get(x)==get(y);
    }
    bool F(int x){
        return f[get(x)];
    }
    int size(int x){
        return p[get(x)];
    }
    int E(int x){
        return e[get(x)];
    }
};
void Nuyoah();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    ll h,r;
    cin>>n>>h>>r;
    vector<ll> x(n+1),y(n+1),z(n+1);
    for(int i=1;i<=n;i++) cin>>x[i]>>y[i]>>z[i];
    DSU dsu(n+2);
    int B=n+1,T=n+2;
    for(int i=1;i<=n;i++){
        if(z[i]<=r) dsu.merge(B,i);
        if(z[i]+r>=h) dsu.merge(T,i);
    }
    ll R2=4*r*r;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            ll dx=x[i]-x[j];
            ll dy=y[i]-y[j];
            ll dz=z[i]-z[j];
            ll d2=dx*dx+dy*dy+dz*dz;
            if(d2<=R2){
                dsu.merge(i,j);
            }
        }
    }
    cout<<(dsu.same(B,T)?"Yes\n":"No\n");
}