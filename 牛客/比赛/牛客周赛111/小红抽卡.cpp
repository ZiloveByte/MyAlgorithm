#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int t=k%x;
    reverse(a.begin(),a.begin()+x);
    reverse(a.begin(),a.begin()+t);
    reverse(a.begin()+t,a.begin()+x);

    for(int i=0;i<n;i++){
        if(i) cout<<' ';
        cout<<a[i];
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}