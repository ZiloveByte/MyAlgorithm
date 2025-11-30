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
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b&&b==c)||(b==a+1&&c==b+1)) cout<<"Yes\n";
    else cout<<"No\n";
}