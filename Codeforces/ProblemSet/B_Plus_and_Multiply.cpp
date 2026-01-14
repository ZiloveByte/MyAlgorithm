#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,a,b;
    cin>>n>>a>>b;
    if(a==1){
        if(n%b==1||n==1||b==1){
            cout<<"Yes\n";
            return;
        }else{
            cout<<"No\n";
            return;
        }
    }
    i64 val=n%b;
    for(i64 i=1;i<=n;i*=a){
        if(i%b==val){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
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