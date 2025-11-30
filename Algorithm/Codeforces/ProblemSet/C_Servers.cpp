#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> ft(n + 1);

    while (q--) {
        ll t, k, d;
        cin >> t >> k >> d;

        vector<int> av;
        for (int i = 1; i <= n; i++) {
            if (ft[i] <= t) av.push_back(i);
        }

        if ((int)av.size() < k) {
            cout << "-1\n";
        } else {
            ll sum = 0;
            for (int i = 0; i < k; i++) {
                int s = av[i];
                sum += s;
                ft[s] = t + d;
            }
            cout << sum << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}