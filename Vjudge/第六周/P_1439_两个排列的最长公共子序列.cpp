#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
constexpr int N = 1e5+5;

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
    vector<ll> p1(N,0),p2(N,0),mp(N,0),dp(N,0);
    for(int i=1;i<=n;i++) cin>>p1[i],mp[p1[i]]=i;
    for(int i=1;i<=n;i++) cin>>p2[i];
    ll lens=1;
    dp[1]=mp[p2[1]];
    for(int i=2;i<=n;i++){
        if(dp[lens]<mp[p2[i]]) dp[++lens]=mp[p2[i]];
        else {
            int it=lower_bound(dp.begin()+1,dp.begin()+1+lens,mp[p2[i]])-dp.begin();
            dp[it]=mp[p2[i]];
        }
    }
    cout<<lens<<"\n";
    return;
}