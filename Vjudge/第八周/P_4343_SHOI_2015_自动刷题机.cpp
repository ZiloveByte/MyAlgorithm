#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
constexpr int N=1e5+5;

using ll=long long;
using ull=unsigned long long;

ll n,m;
vector<ll> a(N);

ll check(ll x){
    ll sum=0,cnt=0;
    for(int i=1;i<=n;i++){
        sum+=a[i];
        if(sum<0) sum=0;
        if(sum>=x) cnt++,sum=0;
    }
    return cnt;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    ll l=1,r=1e15,ans1=-1;
    while(l<=r){
        ll mid=(l+r)>>1;
        if(check(mid)<m) r=mid-1;
        else if(check(mid)>m) l=mid+1;
        else ans1=mid,r=mid-1;
    }
    cout<<ans1<<" ";
    if(ans1==-1) return;
    l=1,r=1e15;
    ll ans2=-1;
    while(l<=r){
        ll mid=(l+r)>>1;
        if(check(mid)<m) r=mid-1;
        else if(check(mid)>m) l=mid+1;
        else ans2=mid,l=mid+1;
    }
    cout<<ans2<<"\n";
}