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
    int X,Y;
    cin>>X>>Y;
    if(X==Y) cout<<"0\n";
    else if((X+Y)==0) cout<<"3\n";
    else if(X==0) cout<<"2\n";
    else if(Y==0) cout<<"1\n";
    else cout<<"-1\n";
    return;
}