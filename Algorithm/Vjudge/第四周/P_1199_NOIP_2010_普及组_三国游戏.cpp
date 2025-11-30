#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void check(vector<ll> &mx1,vector<ll> &mx2,int x,ll v){
    if(v>mx1[x]){
        mx2[x]=mx1[x];
        mx1[x]=v;
    }
    else if(v>mx2[x]){
        mx2[x]=v;
    }
}

void Nuyoah(){
    int N;
    cin>>N;
    vector<ll> mx1(N+1,-1),mx2(N+1,-1);
    for(int i=1;i<=N-1;i++){
        for(int j=i+1;j<=N;j++){
            ll w;
            cin>>w;
            check(mx1,mx2,i,w);
            check(mx1,mx2,j,w);
        }
    }
    ll ans=0;
    for(int i=1;i<=N;i++) ans=max(ans,mx2[i]);
    cout<<"1\n"<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}