#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int n = 4, m = 4;
    vector<string> g(n);
    for (int i = 0; i < n; ++i) {
        if (!(cin >> g[i])) return 0;
    }
    int idx[n][m];
    memset(idx, -1, sizeof(idx));
    vector<pair<int,int>> unk;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (!(g[i][j] >= '0' && g[i][j] <= '8')) {
                idx[i][j] = (int)unk.size();
                unk.push_back({i, j});
            }
    const int dr[8] = {-1,-1,-1,0,0,1,1,1};
    const int dc[8] = {-1,0,1,-1,1,-1,0,1};
    vector<int> masks, needs;
    masks.reserve(16); needs.reserve(16);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (g[i][j] >= '0' && g[i][j] <= '8') {
                int need = g[i][j] - '0';
                int mask = 0;
                for (int k = 0; k < 8; ++k) {
                    int ni = i + dr[k], nj = j + dc[k];
                    if (ni < 0 || ni >= n || nj < 0 || nj >= m) continue;
                    if (idx[ni][nj] != -1) mask |= (1 << idx[ni][nj]);
                }
                masks.push_back(mask);
                needs.push_back(need);
            }

    int K = (int)unk.size();
    if (K == 0) {
        for (int i = 0; i < n; ++i) cout << g[i] << '\n';
        return 0;
    }

    vector<int> alwaysMine(K, 1), alwaysSafe(K, 1);
    long long validCnt = 0;

    int total = 1 << K;
    for (int s = 0; s < total; ++s) {
        bool ok = true;
        for (size_t t = 0; t < masks.size(); ++t) {
            if (__builtin_popcount((unsigned)(s & masks[t])) != needs[t]) {
                ok = false; break;
            }
        }
        if (!ok) continue;
        ++validCnt;
        for (int i = 0; i < K; ++i) {
            if (s & (1 << i)) alwaysSafe[i] = 0;
            else               alwaysMine[i] = 0;
        }
    }
    for (int t = 0; t < K; ++t) {
        auto [i, j] = unk[t];
        if (g[i][j] >= '0' && g[i][j] <= '8') continue;
        if (validCnt > 0 && alwaysMine[t]) g[i][j] = 'X';
        else if (validCnt > 0 && alwaysSafe[t]) g[i][j] = 'O';
        else g[i][j] = '.';
    }

    for (int i = 0; i < n; ++i) cout << g[i] << '\n';
    return 0;
}