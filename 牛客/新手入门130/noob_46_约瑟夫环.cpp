#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,k,m;
    cin>>n>>k>>m;
    if(n==1){
        cout<<"0\n";
        return;
    }
    i64 ans=0;
    for(int i=2;i<=n;i++){
        ans=(ans+m)%i;
    }
    i64 ans1=(k+ans)%n;
    cout<<ans1<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}