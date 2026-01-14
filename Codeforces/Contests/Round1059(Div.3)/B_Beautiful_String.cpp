#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(auto val:s){
        if(val=='0') cnt++;
    }
    cout<<cnt<<"\n";
    for(int i=1;i<=s.length();i++){
        if(s[i-1]=='0') cout<<i<<" ";
    }
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}