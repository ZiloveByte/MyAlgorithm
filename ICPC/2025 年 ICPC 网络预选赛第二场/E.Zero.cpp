#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr ll MODN=998244353;

ll qpow(ll base,ll exp,ll mod){
    ll result=1;
    base%=mod;
    if(base<0) base+=mod;
    while(exp>0){
        if(exp&1) result=(result*base)%mod;
        base=(base*base)%mod;
        exp>>=1;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        ll g=(qpow(2,M,MODN)-1)%MODN;
        if(g<0) g+=MODN;

        ll res=qpow(g,N-1,MODN);
        if(N%2==0){
            res=(res+qpow(-g,N/2,MODN))%MODN;
        }
        if(res<0) res+=MODN;
        cout<<res<<"\n";
    }
    return 0;
}