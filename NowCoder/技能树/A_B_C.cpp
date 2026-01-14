#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    double a,b,c;
    cin>>a>>b>>c;
    if(fabs(b+c-a)<1e-9){
        cout<<"YES\n";
        return;
    }else {
        cout<<"NO\n";
        return;
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