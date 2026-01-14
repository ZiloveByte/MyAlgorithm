#include <bits/stdc++.h>
using namespace std;

constexpr int mod=1e9+7;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 qpow(i64 a,i64 b){
  i64 res=1;
  while(b>0){
    if(b&1) res=res*a%mod;
    a=a*a%mod;
    b>>=1;
  }
  return res;
}
 
void solve() {
    i64 n;
    cin>>n;
    cout<<qpow(2,n/2)<<'\n';
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}