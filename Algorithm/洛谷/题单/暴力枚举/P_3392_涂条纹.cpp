#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m;
char grid[55][55];
ll w[55],b[55],r[55];

void zilove(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        int cntw=0,cntb=0,cntr=0;
        for(int j=1;j<=m;j++){
            if(grid[i][j]!='W')cntw++;
            if(grid[i][j]!='B')cntb++;
            if(grid[i][j]!='R')cntr++;
        }
        w[i]=cntw;b[i]=cntb;r[i]=cntr;
    }
    int ans=INT_MAX;
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            int sum=0;
            for(int k=1;k<=i;k++)sum+=w[k];
            for(int k=i+1;k<=j;k++)sum+=b[k];
            for(int k=j+1;k<=n;k++)sum+=r[k];
            ans=min(ans,sum);
        }
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}