#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MODN=998244353;

ll qpow(ll a, ll b, ll c){
    ll res=1;
    a%=c;
    while(b>0){
        if(b&1)res=(res*a)%c;
        a=(a*a)%c;
        b>>=1;
    }
    return res;
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<ll>a(n);
    ll odd_cnt=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2)odd_cnt++;
    }
    ll tot_xl=qpow(2,n,MODN);
    ll odd_xl=qpow(2,odd_cnt,MODN);
    ll even_xl=(tot_xl-odd_xl+MODN)%MODN;
    cout<<even_xl<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Nuyoah();
    }
}