#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int i=0;
    while (i+1<n&&a[i]<=a[i+1])i++;
    while (i+1<n&&a[i]>=a[i+1])i++;
    cout<<(i==n-1?"YES\n":"NO\n");
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}