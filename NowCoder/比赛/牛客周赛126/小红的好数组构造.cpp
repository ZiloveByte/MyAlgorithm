#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,k;
    cin>>n>>k;
    if((n-k)%2!=0){
        cout<<"-1\n";
        return;
    }
    vector<i64> ans;
    for(int i=0;i<k;i++){
        ans.push_back(10000000+i);
    }
    for(int i=0;i<(n-k)/2;i++){
        ans.push_back(i+1);
        ans.push_back(i+1);
    }
    for(auto val:ans) cout<<val<<" ";
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}