#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<long long, int>> req;
    req.push_back({0, 0});
    
    for (int i = 0; i < n; i++) {
        long long a;
        int b;
        cin >> a >> b;
        req.push_back({a, b});
    }
    
    sort(req.begin(), req.end());
    
    long long ans = 0;

    for (int i = 1; i < req.size(); i++) {
        long long dt = req[i].first - req[i-1].first;
        int dp = abs(req[i].second - req[i-1].second);
        // Maximum points in this interval
        ans += dt - ((dt - dp) & 1);
    }
    
    long long final_dt = m - req.back().first;
    ans += final_dt;
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}