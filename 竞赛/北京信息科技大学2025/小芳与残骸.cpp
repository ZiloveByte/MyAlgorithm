#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;


ll binpow(ll a,ll b,ll p) {
  if (b == 0) return 1;
  ll res = binpow(a, b / 2, p);
  if (b % 2)
    return res * res % p * a % p;
  else
    return res * res % p;
}

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
    int n;
    cin>>n;
    cout<<binpow(2,n-1,MOD)<<"\n";
}