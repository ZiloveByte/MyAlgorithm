#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

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
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(ll x=2;x<=100000;x++){
        bool find=false;
        for(int i=1;i<=n;i++){
            if(__gcd(a[i],x)==1){
                find=true;
                break;
            }
        }
        if(find){
            cout<<x<<"\n";
            return;
        }
    }
    cout<<"-1\n";
}