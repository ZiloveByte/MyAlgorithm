#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Nuyoah(){
    int n;
    ll t;
    cin>>n>>t;
    vector<ll> a(n),b(n);
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++) cin>>b[i];

    ll sum_real=0;
    for (ll x:a) sum_real+=x;

    ll need=t-sum_real;
    if (need<=0){
        cout<<"0\n";
        return;
    }

    ll B=0;
    for (ll x:b) B+=x;

    vector<ll> vals;
    vals.reserve((size_t)B);
    for (int i=0; i<n;i++) {
        for (ll k=0;k<b[i];k++) vals.push_back(a[i]);
    }
    if(vals.empty()){
        cout<<"-1\n";
        return;
    }

    sort(vals.begin(),vals.end(),greater<ll>());

    ll acc=0;
    for (size_t i=0;i<vals.size();i++){
        acc+=vals[i];
        if(acc>=need) {
            cout<<(i+1)<<'\n';
            return;
        }
    }
    cout<<"-1\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}