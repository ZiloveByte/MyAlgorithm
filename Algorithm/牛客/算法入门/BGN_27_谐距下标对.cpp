#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= i;
    }

    unordered_map<int, int> freq;
    for (int x : a) freq[x]++;

    long long res = 0;
    for (auto &[k, cnt] : freq) {
        res += (long long)cnt * (cnt - 1) / 2;
    }

    cout << res << "\n";
    return 0;
}