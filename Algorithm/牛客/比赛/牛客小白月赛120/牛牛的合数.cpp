#include <bits/stdc++.h>
using namespace std;

bool isH(int n){
    if (n<=3){
        return false;
    }
    if (n%2==0){
        return true;
    }
    for (int i=3;i*i<=n;i+=2){
        if (n%i==0){
            return true;
        }
    }
    return false;
}

void Nuyoah(){
    int x;
    cin>>x;
    for(int i=1;i<x;i++){
        int y=x^i;
        if (isH(y)){
            cout<<i<<"\n";
            return; 
        }
    }
    cout<<-1<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        Nuyoah();
    }
    return 0;
}
