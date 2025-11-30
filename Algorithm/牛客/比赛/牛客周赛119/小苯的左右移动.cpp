#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

ll mod_pow2(ll x){
    ll base = 2, res = 1;
    while(x){
        if(x & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        x >>= 1;
    }
    return res;
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
    ll n,k;
    cin>>n>>k;
    ll e=0;
    for(int i=1;i<=n;i++){
        ll a;
        cin>>a;
        if(i&1){
            e+=a;
        }else{
            if(e>=a){
                e-=a;
            }else{
                ll val=a-e;
                if(val>=63){
                    k=0;
                }else{
                    k>>=val;
                }
                e=0;
            }
        }
    }
    ll ans=(k%MOD)*mod_pow2(e)%MOD;
    cout<<ans<<'\n';
}