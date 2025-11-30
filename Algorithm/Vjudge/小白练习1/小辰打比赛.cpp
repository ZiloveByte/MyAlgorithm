#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int res=0;
    for(int i=0;i<n;i++){
        if(a[i]<x) res+=a[i];
        else break;
    }
    cout<<res<<"\n";
}