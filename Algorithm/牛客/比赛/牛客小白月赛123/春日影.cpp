#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll = long long;
using ull = unsigned long long;

void Nuyoah();
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, ll>>> graph(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }

    vector<ll> best_distance(n + 1, LLONG_MAX);
    vector<int> best_edges(n + 1, INT_MAX);
    using tup = tuple<ll, int, int>;
    priority_queue<tup, vector<tup>, greater<tup>> pq;

    best_distance[1] = 0;
    best_edges[1] = 0;
    pq.emplace(0, 0, 1);

    while (!pq.empty()) {
        auto [d, e, u] = pq.top();
        pq.pop();
        if (d != best_distance[u] || e != best_edges[u]) continue;
        for (auto [v, w] : graph[u]) {
            ll nd = d + w;
            int ne = e + 1;
            if (nd < best_distance[v] || (nd == best_distance[v] && ne < best_edges[v])) {
                best_distance[v] = nd;
                best_edges[v] = ne;
                pq.emplace(nd, ne, v);
            }
        }
    }

    if (best_distance[n] == LLONG_MAX) {
        cout << -1 << '\n';
    } else {
        cout << best_edges[n] + 1 << '\n';
    }
}