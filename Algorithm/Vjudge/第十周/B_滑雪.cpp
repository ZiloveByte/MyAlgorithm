#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

int n,m;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int a[110][110];
int b[110][110];
int dir[4][2]={1,0,-1,0,0,1,0,-1};

int dfs(int x,int y){
    if(b[x][y]) return b[x][y];
    int val=0;
    for(int i=0;i<4;i++){
        int dx=x+dir[i][0];
        int dy=y+dir[i][1];
        if(dx<=n&&dx>0&&dy<=m&&dy>0&&a[x][y]>a[dx][dy]){
            val=max(dfs(dx,dy)+1,val);
        }
    }
    b[x][y]=max(val,b[x][y]);
    return b[x][y];
}
void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) ans=max(ans,dfs(i,j));
    }
    cout<<ans+1<<"\n";
    return;
}