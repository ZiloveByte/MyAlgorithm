#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,a,cntr=0,cntl=0;
    cin>>n>>a;
    vector<i64> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(v[0]>=a){
        cout<<a+1<<"\n";
        return;
    }else if(v[n-1]<=a){
        cout<<a-1<<"\n";
        return;
    }
    for(auto val:v){
        if(val>=a) cntr++;
        if(val<=a) cntl++;
    }
    if(cntr>=cntl) cout<<a+1<<"\n";
    else cout<<a-1<<"\n";
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