#include <bits/stdc++.h>
using namespace std;

int n,m,k;
vector<vector<char>> edge;
vector<vector<char>> vis;
unordered_map<int,int> res;
int dx[3]={0,1,-1};
int dy[3]={1,0,0};

int to10(string &l){
    int res=0;
    int cnt=0;
    reverse(l.begin(),l.end());
    for (auto c:l){
        if (c=='1') {
            res+=pow(2,cnt);
        }
        cnt++;
    }
    return res;
}

void bfs(queue<pair<int,int>> &q){
    string dir="";
    int step=0;
    int ans=INT_MAX;
    while(!q.empty()){
        auto [x,y]=q.front();
        q.pop();
        for (int i=0;i<3;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if (yy==m-1){
                res[to10(dir)]=min(res[to10(dir)],step);
                return;
            }
            if (xx>=0 && xx<n && yy>=0 && yy<m && vis[xx][yy]=='0'){
                if (edge[xx][yy]=='0'){
                    vis[xx][yy]='1';
                    step++;
                    q.push({xx,yy});
                }
                else{
                    if (y<x){
                        dir+="0";
                        q.push({x-1,y});
                        vis[x-1][y]='1';
                        step++;
                    }
                    else if (y>x){
                        dir+="1";
                        q.push({x+1,y});
                        vis[x+1][y]='1';
                        step++;
                    }
                }
            }
        }
    }
    return;
}

void solve(){
    cin>>n>>m;
    edge.assign(n,vector<char>(m,'0'));
    edge.assign(n,vector<char>(m,'0'));
    cin>>k;
    for (int i=0;i<k;i++){
        int r,c;
        cin>>r>>c;
        r--,c--;
        edge[r][c]='1';
    }
    queue<pair<int,int>> q;
    for (int i=0;i<m;i++){
        q.push({i,0});
        bfs(q);
    }
    for (int i=0;i<pow(2,k);i++){
        if (res.count(i)) cout<<res[i]<<" ";
        else cout<<"-1"<<" ";
    }
    cout<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}