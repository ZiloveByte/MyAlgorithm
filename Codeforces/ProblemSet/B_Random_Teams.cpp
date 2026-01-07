#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,m;
    cin>>n>>m;
    cout<<m*(n/m-1)*(n/m)/2+(n%m)*(n/m)<<" ";
    cout<<(n-(m-1))*(n-m)/2<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}