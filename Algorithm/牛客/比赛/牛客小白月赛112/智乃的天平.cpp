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
    int a,b,w;
    cin>>a>>b>>w;
    if((a+b)<w) cout<<"No\n";
    else if((a+b)==w) cout<<"Yes\n";
    else if((a+w)==b) cout<<"Yes\n";
    else if((b+w)==a) cout<<"Yes\n";
    else if(a==w||b==w) cout<<"Yes\n";
    else cout<<"No\n";
}