#include <bits/stdc++.h>
using ld = long double;
using i64 = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;
    set<pair<int, int>> ss;
    while (m--) {
        int a, b;
        cin >> a >> b;
        ss.insert({a, b});
    }

    for (int i = 2; i <= n; i++) {
        if (!ss.count({i - 1, i})) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";

    return 0;
}
