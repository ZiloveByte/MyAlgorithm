#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 check(i64 x) {
    if (x==0) return 0;
    i64 root=sqrtl(x);
    while (root*root>x) root--;
    while ((root+1)*(root+1)<=x) root++;
    return root;
}
 
void solve() {
    i64 n;
    cin>>n;
    if(n<9){
        cout<<"0\n";
        return;
    }
    i64 m=check(n/9);
    cout<<m<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}