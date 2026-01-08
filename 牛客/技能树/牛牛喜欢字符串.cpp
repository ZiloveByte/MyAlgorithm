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
    string s;
    cin>>s;
    i64 ans=0;
    for(int i=0;i<k;i++){
        unordered_map<i64,i64> mp;
        i64 sum=0,maxn=0;
        for(int j=i;j<n;j+=k){
            mp[s[j]-'a']++;
            sum++;
            maxn=max(maxn,mp[s[j]-'a']);
        }
        ans+=sum-maxn;
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}