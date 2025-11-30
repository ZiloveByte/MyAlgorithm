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
    ll n,m,k,q;
    cin>>n>>m>>k>>q;
    ll a=m*(k-1);
    ll maxn=min(n,a);
    bool ok=false;
    if(q<=maxn&&(q%k)==(n%k)) ok=true;
    cout<<(ok?"Yes":"No")<<"\n";
    return;
}