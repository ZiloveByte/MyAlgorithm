#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
constexpr int MAXN = 1e5;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,w;
    cin>>n>>w;
    vector<ll> s(MAXN+1,0);
    int maxX=0;
    int minX=MAXN;
    for(int i=0;i<n;i++){
        int x,b;
        cin>>x>>b;
        s[x]+=b;
        if(x>maxX) maxX=x;
        if(x<minX) minX=x;
    }
    if(n==0){
        cout<<0<<"\n";
        return;
    }
    ll ans=0;
    if(w==0){
        cout<<0<<"\n";
        return;
    }
    int need=maxX-minX+1;
    if(w>=need){
        ll total=0;
        for(int i=minX;i<=maxX;i++) total+=s[i];
        cout<<total<<"\n";
        return;
    }
    ll cur=0;
    for(int i=minX;i<=minX+w-1;i++){
        cur+=s[i];
    }
    ans=cur;
    for(int i=minX+w;i<=maxX;i++){
        cur+=s[i]-s[i-w];
        if(cur>ans) ans=cur;
    }
    cout<<ans<<"\n";
    return;
}