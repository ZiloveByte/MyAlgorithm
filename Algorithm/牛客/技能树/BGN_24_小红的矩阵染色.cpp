#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    long long k;
    cin>>n>>m>>k;
    vector<string> g(n);
    for (int i = 0; i < n; ++i) cin >> g[i];
    vector<int> seg;
    long long totalWhite = 0;
    for (int col = 0; col < m; ++col) {
        int row = 0;
        while (row < n) {
            if (g[row][col] == '*' || g[row][col] == '#') {
                ++row;
                continue;
            }
            int len = 0;
            while (row < n && (g[row][col] == 'o' || g[row][col] == '0')) {
                ++len;
                ++row;
            }
            seg.push_back(len);
            totalWhite += len;
        }
    }
    if (seg.empty()) {
        cout << 0 << '\n';
        return 0;
    }
    sort(seg.begin(), seg.end(), greater<int>());

    long long answer = 0;
    if (k >= totalWhite) {
        answer = totalWhite - static_cast<long long>(seg.size());
    } else {
        long long pref = 0;
        int used = 0; 
        for (int len : seg) {
            pref += len;
            ++used;
            if (pref >= k) break; 
        }
        answer = k - used;
    }

    cout << answer << '\n';
    return 0;
}