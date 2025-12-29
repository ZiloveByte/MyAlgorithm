#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,sum=0;
    cin>>n;
    vector<i64> b(n+1);
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(b.begin()+1,b.begin()+1+n);
    i64 idx=1;
    for(int i=1;i<=n;i++){
        if(b[i]!=0){
            idx=i;
            break;
        }
    }
    for(int i=idx;i<=n;i++) sum+=b[i]-1;
    if(sum>=n-1) cout<<n-idx+1<<"\n";
    else cout<<max(1LL,n-idx+1-(n-1-sum))<<"\n";

}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}