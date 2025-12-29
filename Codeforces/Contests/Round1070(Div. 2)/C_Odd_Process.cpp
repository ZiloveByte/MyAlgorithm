#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int n;
    cin>>n;
    vector<i64> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<i64> evens,odds;
    evens.reserve(n);
    odds.reserve(n);
    for(auto x:a){
        if(x&1LL) odds.push_back(x);
        else evens.push_back(x);
    }
    if(odds.empty()){
        for(int k=1;k<=n;k++){
            cout<<0<<" ";
        }
        cout<<"\n";
        return;
    }
    sort(evens.begin(),evens.end(),greater<i64>());
    sort(odds.begin(),odds.end(),greater<i64>());
    int E=evens.size();
    int O=odds.size();
    i64 maxodd=odds[0];
    vector<i64> prefE(E+1,0);
    for(int i=1;i<=E;i++) prefE[i]=prefE[i-1]+evens[i-1];
    int cap=E+2*((O-1)/2);
    for(int k=1;k<=n;k++){
        if(k-1>cap){
            cout<<0<<(k==n?'\n':' ');
            continue;
        }
        int s=min(E,k-1);
        if(s==E){
            int waste=(k-1-s);
            if(waste&1) --s;
        }
        if(s<0){
            cout<<0<<(k==n?'\n':' ');
            continue;
        }
        i64 ans=maxodd+prefE[s];
        cout<<ans<<(k==n?'\n':' ');
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}