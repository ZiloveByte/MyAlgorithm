#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n;
    cin>>n;
    map<string,i64> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp[s]==0){
            cout<<"OK\n";
        }else{
            cout<<s<<mp[s]<<"\n";
        }
        mp[s]++;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}