#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find("2026")!=string::npos||s.find("2025")==string::npos) cout<<0<<"\n";
    else cout<<1<<'\n';
    return;
}