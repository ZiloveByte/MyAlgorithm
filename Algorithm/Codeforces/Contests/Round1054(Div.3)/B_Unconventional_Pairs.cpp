#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    for(int i=0;i<n;i+=2){
        ans = max(ans, a[i+1] - a[i]);
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}