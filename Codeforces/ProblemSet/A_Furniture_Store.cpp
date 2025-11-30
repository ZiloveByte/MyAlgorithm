#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> prefix_min(n);
    prefix_min[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefix_min[i] = min(prefix_min[i-1], a[i]);
    }

    vector<int> cannot_order;
    for (int i = 1; i < n; ++i) {
        if (a[i] > prefix_min[i-1]) {
            cannot_order.push_back(i + 1);
        }
    }

    cout << cannot_order.size() << '\n';
    if (!cannot_order.empty()) {
        for (int i = 0; i < cannot_order.size(); ++i) {
            if (i > 0) cout << ' ';
            cout << cannot_order[i];
        }
        cout << '\n';
    } else {
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}