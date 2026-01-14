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
    vector<i64> a;
    for(int i=0;i<n;i++){
        i64 val;
        cin>>val;
        if(val%2) a.push_back(val);
    }
    if(a.empty()){
        cout<<"-1\n";
        return;
    }
    cout<<a.size()<<"\n";
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