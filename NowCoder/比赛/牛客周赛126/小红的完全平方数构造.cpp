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
    i64 base=10000000000LL;
    i64 l=n*base;
    i64 r=(n+1)*base;
    i64 x=(i64)sqrt((long double)l);
    while(x*x<l) x++;
    cout<<x*x<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}