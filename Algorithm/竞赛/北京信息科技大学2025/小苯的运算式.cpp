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
    ll even=0;
    ll odd=LLONG_MIN/4;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ll even1=max(even,odd-x);
        ll odd1=max(odd,even+x);
        odd=odd1;
        even=even1;
    }
    cout<<max(odd,even)<<'\n';
    return;
}