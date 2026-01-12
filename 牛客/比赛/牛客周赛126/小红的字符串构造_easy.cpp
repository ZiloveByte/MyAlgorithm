#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
bool cmp(string a,string b){
    return a.length() < b.length();
}

void solve() {
    i64 n,k;
    cin>>n>>k;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.begin(),s.end(),cmp);
    if(k<n&&s[k-1]==s[k]) cout<<-1<<"\n";
    else cout<<s[k-1]<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}