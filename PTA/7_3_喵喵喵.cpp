#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int x,y,i;
    cin>>x>>y>>i;
    vector<i64> f(i);
    if(i==1){
        cout<<x<<'\n';
        return;
    }
    else if(i==2){
        cout<<y<<"\n";
        return;
    }
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}