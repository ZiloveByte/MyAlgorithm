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
    int n,m;
    cin>>n>>m;
    int res=0;
    while(m--){
        int fx,x;
        cin>>fx>>x;
        if(fx) res=max(res,n-x);
        else res=max(res,x);
    }
    cout<<res<<'\n';
    return;
}