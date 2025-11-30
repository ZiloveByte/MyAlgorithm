#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    ll n,m;
    cin>>n>>m;
    if(min(n,m)==1){
        cout<<"YES\n";
        return;
    }
    if((n%2==0)&&(m%2==0)){
        cout<<"NO\n";
        return;
    }else{
        cout<<"YES\n";
        return;
    }
    return;
}