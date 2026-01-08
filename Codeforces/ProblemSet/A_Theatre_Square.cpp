#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,m,a;
    cin>>n>>m>>a;
    i64 val1=ceil(1.0*n/a);
    i64 val2=ceil(1.0*m/a);
    cout<<val1*val2;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}