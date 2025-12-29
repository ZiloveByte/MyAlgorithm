#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 w,h;
    cin>>w>>h;
    cout<<(w*w-w%2)*(h*h-h%2)/16<<'\n';
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}