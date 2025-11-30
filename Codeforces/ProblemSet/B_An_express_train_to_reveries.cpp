#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    cin>>n;
    vector<ll>a(n),b(n),mark(n+1,0);
    for(int i=0;i<n;i++)cin>>a[i],mark[a[i]]++;
    for(int i=0;i<n;i++)cin>>b[i],mark[b[i]]++;
    vector<ll>diff,p=a;
    for(int i=0;i<n;i++) if(a[i]!=b[i]) diff.push_back(i);

    auto is_perm = [&](const vector<ll>& x) -> bool {
        vector<ll> cnt(n + 1, 0);
        for (ll v : x) {
            if (v < 1 || v > n) return false;
            cnt[v]++;
        }
        for (int v = 1; v <= n; v++) if (cnt[v] != 1) return false;
        return true;
    };


    if(diff.size()==1){
        vector<ll>used(n+1,0);
        for(int i=0;i<n;i++)if(i!=diff[0])used[a[i]]=1;
        ll val=1;
        while(val<=n&&used[val]) val++;
        p[diff[0]]=val;
    }else{
        vector<ll>p1=p,p2=p;
        p1[diff[0]]=b[diff[0]];
        if (is_perm(p1)){
            p=p1;
        } else {
            p2[diff[1]]=b[diff[1]];
            p=p2;
        }
    }

    for(int i=0;i<n;i++)cout<<p[i]<<(i==(n-1)?"\n":" ");
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}