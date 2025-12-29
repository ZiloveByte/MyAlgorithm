#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int n;
    cin>>n;
    vector<i64> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==0){
        cout<<0<<"\n";
        return;
    }
    int cur=a[0];
    int ans=0;
    for(int i=1;i<n;i++){
        if(a[i]>=cur) cur=a[i];
        else ans++;
    }
    cout<<ans<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}