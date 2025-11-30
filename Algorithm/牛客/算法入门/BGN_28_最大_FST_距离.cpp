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
    cin >> n;
    ll max_plus = LLONG_MIN;
    ll min_plus = LLONG_MAX;
    ll max_minus = LLONG_MIN;
    ll min_minus = LLONG_MAX;
    
    for (int i = 1; i <= n; ++i) {
        ll a;
        cin >> a;
        
        ll i_sq = 1LL * i * i;  
        ll a_sq = a * a;
        
        ll plus = i_sq + a_sq;
        ll minus = i_sq - a_sq;
        max_plus = max(max_plus, plus);
        min_plus = min(min_plus, plus);
        max_minus = max(max_minus, minus);
        min_minus = min(min_minus, minus);
    }
    ll ans = max(max_plus - min_plus, max_minus - min_minus);
    cout << ans << "\n";
}