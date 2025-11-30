#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int par(ll v){
    return (int)(v&1LL);
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    int cnt=0,xpar=0,ypar=0;
    for(int i=0;i<n+m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        cnt ^= 1;
        xpar ^= par(x);
        ypar ^= par(y);
    }
    if((cnt|xpar|ypar)==0) cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}