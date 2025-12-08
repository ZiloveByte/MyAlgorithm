#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    i64 n,m;
    cin>>n>>m;
    i64 mn=LLONG_MAX,mx=LLONG_MIN,x;
    for(int i=0;i<n;i++){
        cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    i64 ans=mx-mn-m;
    if(ans<0) ans=0;
    cout<<ans<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}