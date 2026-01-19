#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 cnt[800005],n,k;

void solve() {
    for(int i=1;i<=n*4;i++) cnt[i]=0;
    cin>>n>>k;
    vector<i64> a(n+1),s(4*n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ++cnt[a[i]];
    }
    for(int i=1;i<=n*4;i++) s[i]=s[i-1]+cnt[i];
    for(int i=n;i;i--){
        i64 d=s[i*4-1]-cnt[i]-cnt[i*2]-cnt[i*3];
        if(d<=k){
            cout<<i<<"\n";
            break;
        }
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