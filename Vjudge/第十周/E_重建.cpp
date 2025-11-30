#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;
int n,m,q,u,v,w,mark=0;
vector<int> t(205);
vector<vector<int>>a(205,vector<int>(205));

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void floyd(int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
        }
    }
}

void Nuyoah(){
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>t[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1e8;
        }
    }
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        a[u][v]=a[v][u]=w;
    }
    for(int i=0;i<n;i++) a[i][i]=0;
    cin>>q;
    t[n]=1e9;
    while(q--){
        cin>>u>>v>>w;
        while(t[mark]<=w) floyd(mark++);
        if(t[u]>w||t[v]>w||a[u][v]==1e8) cout<<"-1\n";
        else cout<<a[u][v]<<"\n";
    }
}