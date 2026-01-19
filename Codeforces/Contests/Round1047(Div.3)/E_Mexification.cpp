#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 n,k,mex,a[1000000],c[1000000];

void check(){
    for(int i=0;i<=n;i++) c[i]=0;
    mex=0;
    for(int i=0;i<n;i++) if(a[i]<=n) c[a[i]]++;
    for(int i=0;i<=n;i++) if(!c[i]){
        mex=i;
        break;
    }
    for(int i=0;i<n;i++) if(a[i]>mex||c[a[i]]>1) a[i]=mex;
}
 
void solve() {
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    check();
    if(k>1){
        check();
        if(k%2){
            check();
        }
    }
    i64 sum=0;
    for(int i=0;i<n;i++) sum+=a[i];
    cout<<sum<<"\n";
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