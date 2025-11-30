#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    ll n;
    cin>>n;
    double ans=0.5+((double)(n-1.0))/(4.0*n-2.0);
    cout<<fixed<<setprecision(6)<<ans<<"\n";
    return;
}