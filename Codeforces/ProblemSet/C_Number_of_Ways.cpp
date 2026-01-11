#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,val,cnt1=0,res=0;
    cin>>n;
    vector<i64> sum(n+1);
    for(int i=1;i<=n;i++){
        cin>>val;
        sum[i]=sum[i-1]+val;
    }
    if(sum[n]%3!=0){
        cout<<"0\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(i>1&&sum[i]==sum[n]*2/3){
            res+=cnt1;
        }
        if(sum[i]==sum[n]/3) cnt1++;
    }
    cout<<res<<"\n";
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