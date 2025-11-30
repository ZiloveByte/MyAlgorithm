#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mx,my,bx,by,pan[30][30],f[30][30];

void Nuyoah(){
    cin>>bx>>by>>mx>>my;
    bx+=2;by+=2;
    mx+=2;my+=2;
    for(int i=2;i<30;i++){
        pan[1][i]=1;
        pan[i][1]=1;
    }
    pan[mx][my]=1;
    pan[mx-2][my-1]=1;
    pan[mx-2][my+1]=1;
    pan[mx+2][my-1]=1;
    pan[mx+2][my+1]=1;
    pan[mx-1][my-2]=1;
    pan[mx-1][my+2]=1;
    pan[mx+1][my-2]=1;
    pan[mx+1][my+2]=1;

    f[1][2]=1;
    for(int i=2;i<=bx;i++){
        for(int j=2;j<=by;j++){
            if(pan[i][j]==1){
                f[i][j]=0;
                continue;
            }
            f[i][j]=f[i-1][j]+f[i][j-1];
        }
    }
    cout<<f[bx][by];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
}