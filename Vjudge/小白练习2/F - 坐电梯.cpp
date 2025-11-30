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
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int maxh=0;
    for(auto x:a){
        if(x>k) maxh=max(maxh,x);
    }
    if(maxh==0) cout<<k-1<<'\n';
    else cout<<(maxh-1)+(maxh-k)<<'\n';
    return;
}