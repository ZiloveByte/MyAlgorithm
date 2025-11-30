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
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll ans=2;
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]&&b[i]>=b[i-1]&&a[i]>=b[i-1]&&b[i]>=a[i-1]) (ans<<=1)%=MOD;
    }
    cout<<ans<<'\n';
    return;
}