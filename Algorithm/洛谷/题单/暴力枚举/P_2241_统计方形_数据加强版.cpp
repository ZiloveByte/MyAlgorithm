#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    ll n,m,cnt1=0,cnt2=0;
    cin>>n>>m;
    for(ll x=0;x<n;x++){
        for(ll y=0;y<m;y++){
            ll maxn = min(n-x, m-y);
            cnt2 += maxn;
            ll tot = static_cast<ll>(n-x) * (m-y);
            cnt1 += tot - maxn;
        }
    }
    cout<<cnt2<<" "<<cnt1;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}
