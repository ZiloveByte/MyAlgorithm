#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Nuyoah() {
    string s;
    cin >> s;

    ll ans = 0;
    int x = 0, y = 0;
    set<pair<pair<int,int>, pair<int,int>>> vis;

    for (char c : s) {
        int nx = x, ny = y;
        if (c == 'N') ny++;
        else if (c == 'S') ny--;
        else if (c == 'E') nx++;
        else nx--;

        pair<int,int> a = {x, y}, b = {nx, ny};
        if (a > b) swap(a, b);

        if (vis.count({a, b})) ans += 1;
        else {
            ans += 5;
            vis.insert({a, b});
        }

        x = nx; y = ny;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) Nuyoah();
    return 0;
}