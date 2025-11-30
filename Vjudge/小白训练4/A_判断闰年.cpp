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
    int n;
    cin>>n;
    if(n%400==0) cout<<"yes\n";
    else if(n%4==0&&n%100!=0) cout<<"yes\n";
    else cout<<"no\n";
    return;
}