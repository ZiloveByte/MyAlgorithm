#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,m;
    cin>>n>>m;
    vector<i64> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n-m+2;i++){
        int j=i+m-2;
        i64 val=a[j]-a[i];
        if(val==m-2||val==m-1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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