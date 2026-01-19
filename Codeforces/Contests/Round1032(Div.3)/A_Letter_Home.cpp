#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,s,maxn=0,minn=LLONG_MAX;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        i64 val;
        cin>>val;
        if(val<minn) minn=val;
        if(val>maxn) maxn=val;
    }
    if(s<=minn) cout<<abs(maxn-s)<<"\n";
    else if(s>=maxn) cout<<abs(minn-s)<<"\n";
    else{
        cout<<((abs(maxn-s)<=abs(minn-s))?abs(maxn-s)+(maxn-minn):abs(minn-s)+(maxn-minn))<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}