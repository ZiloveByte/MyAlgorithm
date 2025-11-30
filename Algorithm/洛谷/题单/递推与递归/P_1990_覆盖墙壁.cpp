#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Nuyoah(){
    ll n;
    if(!(cin >> n)) return;

    const int MOD4 = 10000;

    array<int,4> dp{1,0,0,0}, ndp{};

    for(ll i = 0; i < n; ++i){
        ndp = {0,0,0,0};

        ndp[0] = (ndp[0] + dp[0]) % MOD4;
        ndp[1] = (ndp[1] + dp[0]) % MOD4;
        ndp[2] = (ndp[2] + dp[0]) % MOD4;
        ndp[3] = (ndp[3] + dp[0]) % MOD4;

        ndp[2] = (ndp[2] + dp[1]) % MOD4;
        ndp[3] = (ndp[3] + dp[1]) % MOD4;

        ndp[1] = (ndp[1] + dp[2]) % MOD4;
        ndp[3] = (ndp[3] + dp[2]) % MOD4;

        ndp[0] = (ndp[0] + dp[3]) % MOD4;

        dp = ndp;
    }

    cout << dp[0] % MOD4 << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}