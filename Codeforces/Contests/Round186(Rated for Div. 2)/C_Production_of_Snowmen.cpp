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
    ll n;
    cin>>n;
    vector<ll> a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];
    ll cnt1=0;
    for(int i=0;i<n;i++){
        bool check=true;
        for(int j=0;j<n;j++){
            if(a[j]>=b[(i+j)%n]){
                check=false;
                break;
            }
        }
        if(check) cnt1++;
    }
    ll cnt2=0;
    for(int i=0;i<n;i++){
        bool check=true;
        for(int j=0;j<n;j++){
            if(b[j]>=c[(i+j)%n]){
                check=false;
                break;
            }
        }
        if(check) cnt2++;
    }
    cout<<n*cnt1*cnt2<<"\n";
    return;
}