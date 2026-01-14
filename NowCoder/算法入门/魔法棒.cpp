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
    ll x;
    cin>>x;
    cout<<((x!=2&&x!=3&&x!=5&&x!=6&&x!=8&&x!=11&&x!=14)?"Yes\n":"No\n");
}