#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(m,0);
    ll ans=0;
    for(int i=0;i<n;i++){
        vector<ll> root(m);
        for(int j=0;j<m;j++){
            ll val;
            cin>>val;
            root[j]=val+a[j];
        }
        ll need=0;
        vector<ll> left(m,0);
        for(int j=m-1;j>=0;j--){
            ll v=root[j];
            if(v<0){
                need-=v;
            }else if(v>0){
                ll use=min(v,need);
                need-=use;
                left[j]=v-use;
            }
        }
        ans+=need;
        if(i==n-1){
            ll b=0;
            for(auto x:left) b+=x;
            ans+=b;
        }else{
            for(int j=0;j<m;j++) a[j]=left[j];
        }
    }
    cout<<ans<<'\n';
}