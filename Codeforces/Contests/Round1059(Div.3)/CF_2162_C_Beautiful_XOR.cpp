#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 a,b;
    cin>>a>>b;
    vector<i64> ans;
    for(int i=0;(1ll<<i)<=a;i++){
        if(((a>>i)&1)^((b>>i)&1)){
            ans.push_back(1ll<<i);
            a^=1ll<<i;
        }
    }
    if(a!=b){
        cout<<"-1\n";
        return;
    }
    cout<<ans.size()<<"\n";
    for(auto val:ans) cout<<val<<" ";
    cout<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}