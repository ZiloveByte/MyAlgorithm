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
    vector<i64> a(n+1,0);
    for(int i=0;i<n-1;i++){
        i64 u,v;
        cin>>u>>v;
        a[u]++;
        a[v]++;
    }
    i64 cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) cnt++;
    }
    i64 ans=(cnt+1)/2;
    cout<<ans<<'\n';
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}