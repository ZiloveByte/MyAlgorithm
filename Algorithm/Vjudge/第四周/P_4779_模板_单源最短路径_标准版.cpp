#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n,m,s;
    cin>>n>>m>>s;
    vector<vector<pair<int,ll>>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v; ll w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    const ll INF=(1LL<<62);
    vector<ll> dist(n+1,INF);
    vector<char> vis(n+1,0);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    dist[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        auto cur=pq.top();
        pq.pop();
        int u=cur.second;
        if(vis[u]) continue;
        vis[u]=1;
        for(auto &e:adj[u]){
            int v=e.first;
            ll w=e.second;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}