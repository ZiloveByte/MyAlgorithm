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
    sort(a.begin(),a.end(),greater<i64>());
    if(a[0]==1) a[0]=2;
    else a[0]=1;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}  