#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int jo1=(b==0)?1:(a%2);
    int jo2=c%2;
    int jo3=d%2;
    int jo=(jo1&jo2)^jo3;
    if(jo) cout<<"YES\n";
    else cout<<"NO\n";
    return;
}