#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

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
    ll n,m;
    cin>>n>>m;
    ll ans=0,sum=n;
    map<ll,ll> a;
    for(int i=1;i<=n;i++){
        ll val;
        cin>>val;
        a[val]++;
    }
    for(auto [i,j]:a){
        if(sum>=m){
            ans=max(ans,min(j,m));
        }
        sum-=j;
    }
    cout<<ans<<"\n";
}