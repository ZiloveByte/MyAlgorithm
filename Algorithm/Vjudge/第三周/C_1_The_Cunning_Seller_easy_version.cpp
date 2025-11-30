#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Nuyoah(){
    int n;
    cin>>n;
    ll ans=0;
    ll p=1;
    ll prev=0;
    for (int k=0,m=n;m>0;k++){
        int d=m%3;
        ll price;
        if (k==0) {
            price=3;
        } else {
            price=3*p+k*prev;
        }
        ans+=d*price;
        m/=3;
        prev=p;
        p*=3;
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