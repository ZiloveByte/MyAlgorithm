#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

void solve(){
    ull n;
    cin >> n;
    vector<ull> a(n), b(n);
    map<ull, queue<ull>> check;

    for (ull i = 0; i < n; i++) cin >> a[i];
    for (ull i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (ull i = 0; i < n; i++) check[a[i]].push(b[i]);

    if (check.size() == n) {
        cout << 0 << "\n";
        return;
    }

    ull res = 0;
    for (auto it = check.rbegin(); it != check.rend(); ++it) {
        if (check.size() == n) break;
        while (it->second.size() > 1) {
            for (ull i = it->first;; ++i) {
                if (it->second.size() == 1) break;
                if (!check.count(i)) {
                    ull val = it->second.front();
                    it->second.pop();
                    check[i].push(val);
                    res += (i - it->first) * val;
                }
            }
        }
    }

    cout << res << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}