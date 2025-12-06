#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll = long long;
using ull = unsigned long long;

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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll tot=n*(n-1)/2;
    map<int,ll> cnt;
    for(int x:a){
        cnt[x]++;
    }
    ll same=0;
    for(auto &p:cnt){
        ll c=p.second;
        same+=c*(c-1)/2;
    }
    ll ans=tot-same;
    cout<<ans<<"\n";
    return;
}