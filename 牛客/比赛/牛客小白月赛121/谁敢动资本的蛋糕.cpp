#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;

using ll = long long;
using ull = unsigned long long;

void Nuyoah(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0,xr=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        xr^=a[i];
    }
    cout<<(sum-xr)<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}