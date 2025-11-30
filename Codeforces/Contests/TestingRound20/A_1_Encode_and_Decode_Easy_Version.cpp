#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string mode;
    cin>>mode;

    if (mode == "first") {
        int n; cin >> n;
        string s; s.reserve(n);
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            s.push_back(char('a' + x - 1));
        }
        cout << s << '\n';
    } else {
        string s; cin >> s;
        int n = (int)s.size();
        cout << n << '\n';
        for (int i = 0; i < n; ++i) {
            int x = (s[i] - 'a') + 1;
            if (i) cout << ' ';
            cout << x;
        }
        cout << '\n';
    }
    return 0;
}