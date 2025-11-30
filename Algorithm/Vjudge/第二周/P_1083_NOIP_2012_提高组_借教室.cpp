#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;

using ll = long long;
using ull = unsigned long long;

bool check(ll mid,ll n,vector<ll> &r,vector<ll> &d,vector<ll> &s,vector<ll> &t){
    vector<ll>b(n+2);
    for(int i=1;i<=mid;i++){
        ll L=s[i],R=t[i],x=d[i];
        b[L]+=x;
        b[R+1]-=x;
    }
    for(int i=1;i<=n;i++){
        b[i]+=b[i-1];
        if(b[i]>r[i])return true;
    }
    return false;
}

void Nuyoah(){
    ll n,m;
    cin>>n>>m;
    vector<ll> r(n+1),d(m+1),s(m+1),t(m+1);
    for(int i=1;i<=n;i++)cin>>r[i];
    for(int i=1;i<=m;i++)cin>>d[i]>>s[i]>>t[i];
    ll L=1,R=m;
    ll ans=0;
    while (L<=R){
        ll mid=(L+R)/2;
        if(check(mid,n,r,d,s,t)){
            ans=mid;
            R=mid-1;
        }else L=mid+1;
    }
    if(ans)cout<<"-1\n"<<ans<<"\n";
    else cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}