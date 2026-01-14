#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> f(m + 1, 0);
    f[0] = 1;
    for (int v : a) {
        for (int j = m; j >= v; --j) {
            f[j] += f[j - v];
        }
    }
    cout << f[m] << '\n';
    return 0;
}