#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    string s;
    bool check=true;
    cin>>s;
    i64 lens=s.length(),cnt=0;
    s=" "+s;
    i64 mr=lens,ml=1;
    for(i64 i=1;i<=lens;i++){
        if(s[i]=='>'||s[i]=='*') mr=min(mr,i);
        if(s[i]=='<'||s[i]=='*') ml=max(ml,i);
    }
    if(mr<ml){
        cout<<"-1\n";
        return;
    }else{
        cout<<max(ml,lens-mr+1)<<"\n";
    }
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