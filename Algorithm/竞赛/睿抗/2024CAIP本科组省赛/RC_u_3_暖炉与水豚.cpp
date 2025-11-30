#include <bits/stdc++.h>
using namespace std;

void zilove(){
    int n,m,flag=0;
    cin>>n>>m;
    char matrix[n+2][m+2];
    bool check[n+2][m+2];

    for (int i = 0; i < n+2; i++) {
        for (int j = 0; j < m+2; j++) {
            check[i][j] = true;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(matrix[i][j]=='m'){
                for(int di=-1;di<=1;di++){
                    for(int dj=-1;dj<=1;dj++){
                        if(matrix[i+di][j+dj]!='.'){
                            check[i+di][j+dj]=false;
                        }
                        if(matrix[i+di][j+dj]=='m'||matrix[i+di][j+dj]=='w'){
                            matrix[i+di][j+dj]='.';
                        }
                    }
                }
                check[i][j]=false;
            }else if(matrix[i][j]=='w'){
                check[i][j]=false;
            }else if(matrix[i][j]=='c'){
                for(int di=-1;di<=1;di++){
                    for(int dj=-1;dj<=1;dj++){
                        check[i+di][j+dj]=false;
                    }
                }
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(matrix[i][j]=='w'){
                for(int di=-1;di<=1;di++){
                    for(int dj=-1;dj<=1;dj++){
                        if(check[i+di][j+dj]){
                            cout<<i+di<<" "<<j+dj<<"\n";
                            flag=1;
                        }
                    }
                }
            }
        }
    }
    if(flag==0) cout<<"Too cold!";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}
