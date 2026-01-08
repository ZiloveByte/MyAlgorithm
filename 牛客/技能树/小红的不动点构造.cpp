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
    if(a-b==1) cout<<"-1\n";
    else{
        for(int i=1;i<=b;i++) cout<<i<<' ';
        for(int i=b+1;i<a;i++) cout<<i+1<<" ";
        if(b+1<=a) cout<<b+1<<"\n";
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