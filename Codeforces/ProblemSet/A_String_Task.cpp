#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    string s;
    cin>>s;
    string ans;
    string vowel="AEIYOUaeioyu";
    for(auto val:s){
        if(vowel.find(val)!=string::npos) continue;
        ans+='.';
        ans+=tolower(val);
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}