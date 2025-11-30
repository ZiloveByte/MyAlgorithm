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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>=c&&b<=d) cout<<"A\n";
    else cout<<"B\n";
}