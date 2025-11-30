#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll r,c,k,ans=0;
char grid[105][105];

bool check_r(int i,int j,int k){
    for(int o=i;o<i+k;o++){
        if(grid[o][j]!='.') return false;
    }
    return true;
}

bool check_d(int i,int j,int k){
    for(int o=j;o<j+k;o++){
        if(grid[i][o]!='.') return false;
    }
    return true;
}

void zilove(){
    cin>>r>>c>>k;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(k!=1){
                if(check_r(i,j,k))ans++;
                if(check_d(i,j,k))ans++;
            }else{
                if(grid[i][j]=='.')ans++;
            }
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