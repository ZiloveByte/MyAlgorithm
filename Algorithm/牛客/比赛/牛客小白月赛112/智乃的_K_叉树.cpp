#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

int e[100005]={0};

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
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        e[u]++;
        e[v]++;
    }
    if(n==2){
        cout<<1<<" "<<1;
        return;
    }
    int mmax=0;
    for(int i=1;i<=n;i++){
        mmax=max(mmax,e[i]);
    }
    int r=1;
    while(e[r]==mmax) r++;
    cout<<mmax-1<<" "<<r;
    return;
}