#include <bits/stdc++.h>
using namespace std;
constexpr int MOD =1e9+7;

using ll = long long;
using ull = unsigned long long;

void Nuyoah(){
    int n;
    cin>>n;
    if (n<=1){
        cout<<0<<'\n';
        return;
    }

    vector<ll> inv(n);
    inv[1] = 1;
    for (int i = 2; i <= n - 1; ++i) {
        inv[i] = (MOD - (MOD / i) * inv[MOD % i] % MOD) % MOD;
    }

    ll P_im2 = 0;
    ll P_im1 = 0;
    ll Ei = 0;

    for (int i = 2; i <= n; ++i) {
        Ei = (1 + (2LL * P_im2 % MOD) * inv[i - 1]) % MOD;
        ll Pi = (P_im1 + Ei) % MOD;
        P_im2 = P_im1;
        P_im1 = Pi;
    }
    cout << Ei << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}