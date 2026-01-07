#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,val=0,x;
    cin>>n;
    vector<i64> dp(100005),num(100005);
    for(int i=1;i<=n;i++){
        cin>>x;
        num[x]++;
        val=max(val,x);
    }
    dp[1]=num[1];
    for(int i=2;i<=val;i++){
        dp[i]=max(dp[i-2]+num[i]*i,dp[i-1]);
    }
    cout<<dp[val];
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}