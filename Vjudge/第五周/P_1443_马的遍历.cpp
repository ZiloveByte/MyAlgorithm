#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    x--,y--;
    vector<vector<int>> d(n,vector<int>(m,-1));
    queue<pair<int,int>> q;
    int dx[8]={1,1,2,2,-1,-1,-2,-2},dy[8]={2,-2,1,-1,2,-2,1,-1};
    d[x][y]=0;q.push({x,y});
    while(q.size()){
        auto [i,j]=q.front();
        q.pop();
        for(int k=0;k<8;k++){
            int a=i+dx[k],b=j+dy[k];
            if(a>=0&&a<n&&b>=0&&b<m&&d[a][b]==-1){
                d[a][b]=d[i][j]+1;
                q.push({a,b});
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<d[i][j]<<(j+1==m?"\n":" ");
        }
    }
}