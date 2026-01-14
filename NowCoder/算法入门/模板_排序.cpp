#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(auto val:a)cout<<val<<" ";
    cout<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}