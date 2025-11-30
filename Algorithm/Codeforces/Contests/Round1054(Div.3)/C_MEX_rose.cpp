#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> cnt(n+1,0);
    for(int x:a)cnt[x]++;

    int missing=0;
    for(int x=0;x<k;x++) if(cnt[x]==0) missing++;
    int m=cnt[k];

    cout<<max(missing,m)<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}