#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

ll f(ll n){
    if(n<20180001) return n+2017;
    return f(f(n-2018));
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    cin>>n;
    if(n>=20182017) cout<<"20182017\n";
    else cout<<f(n)<<"\n";
    return;
}