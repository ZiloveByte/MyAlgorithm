#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,res=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j=n-i;
        res=res+(i+1)/2+(j+1)/2;
    }
    cout<<res<<"\n";
    cout<<"1 ";
    for(int i=n;i>1;i--)cout<<i<<" ";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}