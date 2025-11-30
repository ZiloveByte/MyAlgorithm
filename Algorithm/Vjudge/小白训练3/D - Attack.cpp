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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    ll sum=0;
    for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
    ll h,x;
    cin>>h>>x;
    sort(a.begin(),a.end(),greater<ll>());
    bool alive=true;
    for(int i=0;i<n;i++){
        if(sum==0) break;
        ll rate=(sum>k?k:sum);
        __int128_t damage=(__int128_t)rate*(__int128_t)x;
        if(damage>h){
            alive=false;
            break;
        }
        h-=(ll)damage;
        sum-=a[i];
    }
    if(alive) cout<<"NO\n";
    else cout<<"YES\n";
    return;
}