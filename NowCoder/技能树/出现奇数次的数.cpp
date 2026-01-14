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
    map<i64,i64> mp;
    for(int i=0;i<2*n+1;i++){
        i64 val;
        cin>>val;
        mp[val]++;
    }
    for(auto [a,b]:mp){
        if(b%2) cout<<a<<"\n";
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}