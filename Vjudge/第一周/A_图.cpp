#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100010;

vector<int> graph[MAXN];
vector<int> rev_graph[MAXN];
int ans[MAXN];
bool visited[MAXN];

void dfs(int u,int val){
    if (visited[u]) return;
    visited[u]=true;
    ans[u]=val;
    for (int v:rev_graph[u]){
        if(!visited[v]) dfs(v, val);
    }
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        rev_graph[v].push_back(u);
    }

    for(int i=n;i>=1;i--){
        if(ans[i]==0) dfs(i,i);
    }

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
    return 0;
}