#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 998244353;

// 快速幂
ll qpow(ll base, ll exp, ll mod) {
    ll result=1;
    base%=mod;
    while(exp>0){
        if(exp&1) result=(result*base)%mod;
        base=(base*base)%mod;
        exp>>=1;
    }
    return result;
}

void Nuyoah(){
    ll n,res=0;
    cin>>n;
    vector<ll>a(n);

    for(int i=0;i<n;i++)cin>>a[i];

    sort(a.begin(),a.end());

    ll inv2=qpow(2,MOD-2,MOD);

    // (3^(i)+1)/2  *  2^(n-i-1)
    for (int i=0;i<n;i++){
        ll pow3=qpow(3,i,MOD);
        ll left=((pow3+1)%MOD)*inv2%MOD;
        ll pow2=qpow(2,n-1-i,MOD);
        ll xs=left*pow2%MOD;

        res=(res+xs*a[i])%MOD;
    }
    cout<<res<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)Nuyoah();
    return 0;
}