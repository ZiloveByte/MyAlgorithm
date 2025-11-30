#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    ll a;
    cin >> n >> a;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n == 1) {
        cout << a + 1 << "\n";
        return;
    }

    auto get_score = [&](ll b) -> int {
        int score = 0;
        for (ll x : v) {
            if (abs(x - b) < abs(x - a)) {
                score++;
            }
        }
        return score;
    };

    set<ll> candidates;
    // v[i]及其邻近点
    for (ll x : v) {
        candidates.insert(x);
        candidates.insert(x - 1);
        candidates.insert(x + 1);
    }
    // a的对称点及其邻近点
    for (ll x : v) {
        ll sym = 2 * a - x;
        if (sym >= 0) {
            candidates.insert(sym);
            candidates.insert(sym - 1);
            candidates.insert(sym + 1);
        }
    }
    // a的邻近点
    candidates.insert(a - 1);
    candidates.insert(a + 1);

    // 检查相邻v[i]之间的区间
    for (int i = 0; i < n - 1; i++) {
        ll l = v[i], r = v[i+1];
        if (l + 1 < r) {
            candidates.insert((l + r) / 2);
            if ((l + r) % 2 == 0) {
                candidates.insert((l + r) / 2);
            } else {
                candidates.insert((l + r) / 2);
                candidates.insert((l + r) / 2 + 1);
            }
        }
    }

    // 检查v[0]左边的区间
    if (v[0] > 0) {
        candidates.insert(0);
        if (v[0] > 1) {
            candidates.insert(1);
        }
    }

    ll best_b = a + 1;
    int max_score = -1;

    for (ll b : candidates) {
        if (b < 0 || b > 2000000000LL) continue;
        int score = get_score(b);
        if (score > max_score || (score == max_score && b < best_b)) {
            max_score = score;
            best_b = b;
        }
    }

    cout << best_b << "\n";
}