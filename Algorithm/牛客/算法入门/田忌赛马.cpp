#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    vector<ll>v(3),a(3);
    cin>>v[0]>>v[1]>>v[2]>>a[0]>>a[1]>>a[2];
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    if(a[2]>v[1]&&a[1]>v[0])cout<<"Yes\n";
    else cout<<"No\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}