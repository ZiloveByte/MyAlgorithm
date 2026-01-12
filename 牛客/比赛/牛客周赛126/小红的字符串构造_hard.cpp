#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,k;
    cin>>n>>k;
    map<string,int> mp;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        mp[s[i]]++;
    }
    for(auto val:s){
        i64 pre=0;
        string pres="";
        for(auto sym:val){
            pres+=sym;
            if(mp.count(pres)) pre+=mp[pres];
        }
        if(pre==k){
            cout<<val<<"\n";
            return;
        }
    }
    cout<<"-1\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}