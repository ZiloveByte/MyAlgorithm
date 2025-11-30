#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    ll pos=0,neg=0;
    for(int i=1;i<n;i++){
        ll d=a[i]-a[i-1];
        if(d>0) pos+=d;
        else neg += -d;
    }
    cout<<max(pos,neg)<<"\n";
    cout<<llabs(pos-neg)+1<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}