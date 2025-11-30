#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if((n+1)/2==m){
        cout<<"1\n";
        return;
    }
    int cnta=m-(n+1)/2;
    cout<<2*cnta+1<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}