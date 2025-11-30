#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;


int n, m;
vector<int> a(1e6,0);
const int dx[4]={1,-1,0,0};
const int dy[4]={0,0,1,-1};

bool check(int T){
    vector<char> vis(n*m,0);
    queue<int> q;
    for(int j=0;j<m;j++){
        int u=j;
        vis[u]=1;
        q.push(u);
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        int x=u/m,y=u%m;
        for(int k=0;k<4;k++){
            int nx =x+dx[k],ny=y+dy[k];
            if(!(nx>=0&&nx<n&&ny>=0&&ny<m)) continue;
            int v=nx*m+ny;
            if(vis[v]) continue;
            if(nx==0||nx==n-1||a[v]<=T){
                vis[v]=1;
                q.push(v);
            }
        }
    }
    for(int j=0;j<m;j++){
        if(!vis[(n-1)*m+j]) return false;
    }
    return true;
}

void Nuyoah(){

    cin>>n>>m;

    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            a[i*m+j]=x;
            if(i!=0 && i!=n-1) mx=max(mx,x);
        }
    }

    int l=0,r=mx;
    while(l<r){
        int mid=(l+r)/2;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    cout<<l<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}