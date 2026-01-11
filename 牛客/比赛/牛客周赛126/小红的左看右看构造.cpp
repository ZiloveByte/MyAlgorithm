#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 x,y,n;
    cin>>x>>y>>n;
    vector<i64> c(x),d(y);
    if(x+y-1<n){
        cout<<"-1\n";
        return;
    }
    for(int i=0;i<x;i++) cin>>c[i];
    for(int i=0;i<y;i++) cin>>d[i];
    if(c[x-1]!=d[y-1]){
        cout<<"-1\n";
        return;
    }
    for(auto val:c) cout<<val<<" ";
    for(int i=0;i<n-x-y+1;i++) cout<<"1 ";
    for(int i=y-2;i>=0;i--) cout<<d[i]<<" ";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}