#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n;
    cin>>n;
    vector<i64> cnt(n+1);
    for(int i=1;i<=2*n;i++){
        i64 x;
        cin>>x;
        if(x>n) continue;
        cnt[x]++;
    }
    i64 ans=0;
    for(int i=1;i<=n;i++){
        ans+=min(cnt[i],2ll);
    }
    cout<<ans<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}