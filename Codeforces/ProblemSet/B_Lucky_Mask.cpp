#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 a,b;
    cin>>a>>b;
    if(a<b){
        cout<<b<<"\n";
        return; 
    }
    for(i64 i=a+1;1;i++){
        string s=to_string(i);
        string res;
        for(int j=0;j<s.size();j++){
            if(s[j]=='4'||s[j]=='7') res+=s[j];
        }
        i64 sum;
        if(res.empty()) continue;
        else sum=stoll(res);
        if(sum==b){
            cout<<i<<'\n';
            return;
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}