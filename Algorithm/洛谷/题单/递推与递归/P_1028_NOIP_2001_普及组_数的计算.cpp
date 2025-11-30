#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<int, ll> memo;

ll f(int x){
    if (x <= 1) return 1;
    if (memo.count(x)) return memo[x];
    ll ans = 1;
    for (int i = 1; i <= x / 2; ++i) ans += f(i);
    return memo[x] = ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (cin >> n){
        cout << f(n) << '\n';
    }
}