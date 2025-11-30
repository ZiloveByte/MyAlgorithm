#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    ll x;
    cin>>x;
    ll p=1;
    while(9*p<=x) p*=10;
    ll y=10*p-x-1;
    cout<<y<<'\n';
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}