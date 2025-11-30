#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool checkp(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void zilove(int x,int y){
    int n;
    bool check=true;
    long long res;
    for(int i=x;i<=y;i++){
        res=i*i+i+41;
        if(!checkp(res)){
            check=false;
            break;
        }
    }
    if(check)cout<<"OK\n";
    else cout<<"Sorry\n";
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int x, y;
    while(cin>>x>>y&&(x!=0||y!=0)){
        zilove(x, y);
    }
    return 0;
}