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
    int n;
    cin>>n;
    vector <ll> a(n+1),c(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>c[i];

    ll tot=0;
    for(int i=1;i<=n;i++) tot+=c[i];

    vector <ll> dp(n+1,0);
    ll best=0;
    for(int i=1;i<=n;i++){
        dp[i]=c[i];
        for(int j=1;j<i;j++){
            if(a[j]<=a[i]) dp[i]=max(dp[i],dp[j]+c[i]);
        }
        best=max(best,dp[i]);
    }
    cout<<tot-best<<'\n';
}