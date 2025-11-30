#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> fa, p, e, f;
    DSU(int n) {
        fa.resize(n + 1);
        iota(fa.begin(), fa.end(), 0);
        p.resize(n + 1, 1);
        e.resize(n + 1);
        f.resize(n + 1);
    }
    int get(int x) {
        while (x != fa[x]) {
            x = fa[x] = fa[fa[x]];
        }
        return x;
    }
    bool merge(int x, int y) {
        if (x == y) f[get(x)] = 1;
        x = get(x), y = get(y);
        e[x]++;
        if (x == y) return false;
        if (x < y) swap(x, y);
        fa[y] = x;
        f[x] |= f[y], p[x] += p[y], e[x] += e[y];
        return true;
    }
    bool same(int x, int y) { return get(x) == get(y); }
    bool F(int x) { return f[get(x)]; }
    int size(int x) { return p[get(x)]; }
    int E(int x) { return e[get(x)]; }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    if (!(cin >> n)) return 0;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) cin >> p[i];

    DSU dsu(n);
    for (int i = 1; i <= n; ++i) {
        if (p[i] != i) dsu.merge(i, p[i]);
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) if (dsu.get(i) == i) ++ans;
    cout << ans << '\n';
    return 0;
}