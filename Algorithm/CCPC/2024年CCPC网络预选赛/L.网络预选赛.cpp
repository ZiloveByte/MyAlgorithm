#include <bits/stdc++.h>
using namespace std;

void Nuyoah(){
    int n,m,cnt=0;
    cin>>n>>m;
    char b[n+1][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>b[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[i][j]=='c'&&b[i+1][j]=='p'&&b[i+1][j+1]=='c'&&b[i][j+1]=='c') cnt++;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}