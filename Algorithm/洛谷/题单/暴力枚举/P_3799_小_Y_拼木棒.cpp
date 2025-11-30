#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=1e5+5,maxv=5e3+5,mod=1e9+7;
int n,a[maxn];
ll sum[maxv],cnt[maxv];

void zilove(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[a[i]]++;
    }
    for(int x=2;x<=5e3;x++){
        for(int i=1;i+i<x;i++){
            cnt[x]+=sum[i]*sum[x-i];
            cnt[x]%=mod;
        }
        if(x%2==0){
            cnt[x]+=sum[x/2]*(sum[x/2]-1)/2;
            cnt[x] %= mod;
        }
    }
    ll ans=0;
    for(int x=2;x<=5e3;x++){
        ans+=cnt[x]*(sum[x]*(sum[x]-1)/2%mod)%mod;
        ans%=mod;
    }
    cout<<ans;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}