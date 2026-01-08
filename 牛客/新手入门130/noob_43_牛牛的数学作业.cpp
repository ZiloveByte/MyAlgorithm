#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,maxn=0,minn=LLONG_MAX,sum=0;
    cin>>n;
    vector<i64> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(maxn<a[i]) maxn=a[i];
        if(minn>a[i]) minn=a[i];
    }
    cout<<maxn-minn<<' ';
    double D,avg,val=0;
    avg=1.0*sum/n;
    for(int i=0;i<n;i++){
        val+=1.0*(a[i]-avg)*(a[i]-avg);
    }
    D=1.0*val/n;
    cout<<fixed<<setprecision(3)<<D<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}