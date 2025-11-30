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
    vector<pair<ll,ll>> a(n);
    ll lmax=LLONG_MIN,rmin=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        lmax=max(lmax,a[i].first);
        rmin=min(rmin,a[i].second);
    }
    sort(a.begin(),a.end());
    bool ok=true;
    ll prermax=LLONG_MIN;
    for(int i=0;i<n&&ok;){
        int j=i;
        ll grmax=LLONG_MIN;
        ll li=a[i].first;
        while(j<n&&a[j].first==li){
            ll r=a[j].second;
            if(prermax>r){ok=false;break;}
            grmax=max(grmax,r);
            j++;
        }
        prermax=max(prermax,grmax);
        i=j;
    }
    if(lmax>rmin) ok=false;
    if(ok) cout<<"Yes\n";
    else cout<<"No\n";
}