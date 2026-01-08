#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 a,b,c;
    scanf("%lld,%lld,...,%lld",&a,&b,&c);
    cout<<c-b-1<<"\n";
}
 
int main(){
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}