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
    vector<i64> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            a[i]=max(a[i-1],a[i+1]);
        }
    }
    for(auto val:a) cout<<val<<" ";
    cout<<"\n";
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