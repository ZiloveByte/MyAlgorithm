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
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    vector<ll> id(n);
    iota(id.begin(),id.end(),0);
    sort(id.begin(),id.end(),[&](int x,int y){
        return b[x]>b[y];
    });
    ll base=0;
    for(int i=0;i<n;i++) base+=a[i];
    ll sub=0;
    for(int i=0;i<n;i++){
        int val=id[i];
        sub+=b[val]*i;
    }
    cout<<base-sub<<"\n";
}