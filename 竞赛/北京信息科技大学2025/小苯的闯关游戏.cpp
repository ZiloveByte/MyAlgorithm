#include<bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();

ll solve(vector<ll>&a,ll x0){
    ll x=x0,S=0;
    for(ll ai:a){
        if(x>ai){x+=1;S+=1;}
        else if(x<ai){x-=1;S-=1;}
    }
    return S;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<ll>a(n);
    ll mn=LLONG_MAX,mx=LLONG_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    ll lo=mn-n-5;
    ll hi=mx+n+5;
    while(lo+1<hi){
        ll mid=lo+(hi-lo)/2;
        ll S=solve(a,mid);
        if(S>0)hi=mid;
        else lo=mid;
    }
    cout<<hi<<'\n';
    return;
}