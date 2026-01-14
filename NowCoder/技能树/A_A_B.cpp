#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 b;
    cin>>b;
    if(sqrtl(b)==(i64)sqrtl(b)){
        cout<<"YES\n";
        return;
    }else{
        cout<<"NO\n";
        return;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}