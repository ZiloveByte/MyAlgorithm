#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct SCC{
    int n,now,cnt;
    vector<vector<int>>ver;
    vector<int>dfn,low,col,S;
    SCC(int n):n(n),ver(n+1),low(n+1){
        dfn.resize(n+1,-1);
        col.resize(n+1,-1);
        now=cnt=0;
    }
    void add(int x,int y){
        ver[x].push_back(y);
    }
    void tarjan(int x){
        dfn[x]=low[x]=now++;
        S.push_back(x);
        for(auto y:ver[x]){
            if(dfn[y]==-1){
                tarjan(y);
                low[x]=min(low[x],low[y]);
            }else if(col[y]==-1){
                low[x]=min(low[x],dfn[y]);
            }
        }
        if(dfn[x]==low[x]){
            int pre;
            cnt++;
            do{
                pre=S.back();
                col[pre]=cnt;
                S.pop_back();
            }while(pre!=x);
        }
    }
    auto work(){
        for(int i=1;i<=n;i++){
            if(dfn[i]==-1){
                tarjan(i);
            }
        }
        vector<int>siz(cnt+1);
        vector<vector<int>>adj(cnt+1);
        for(int i=1;i<=n;i++){
            siz[col[i]]++;
            for(auto j:ver[i]){
                int x=col[i],y=col[j];
                if(x!=y){
                    adj[x].push_back(y);
                }
            }
        }
        return make_tuple(cnt,adj,col,siz);
    }
};

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    SCC g(n);
    while(m--){
        int u,v;
        cin>>u>>v;
        g.add(u,v);
    }
    auto [tot,G,c,_] = g.work();
    vector<int> w(tot+1,0);
    for(int i=1;i<=n;i++) w[c[i]]+=a[i];
    vector<int> deg(tot+1,0), dp=w;
    for(int u=1;u<=tot;u++)
        for(int v:G[u]) deg[v]++;
    queue<int> q;
    for(int i=1;i<=tot;i++)
        if(!deg[i]) q.push(i);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:G[u]){
            dp[v]=max(dp[v],dp[u]+w[v]);
            deg[v]--;
            if(deg[v]==0) q.push(v);
        }
    }
    cout<<*max_element(dp.begin()+1,dp.end());
}