#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;

    set<string> marked;

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        string prefix = s.substr(l, r - l + 1);

        for (int end = l; end < n; end++) {
            string sub = s.substr(l, end - l + 1);
            if (sub.find(prefix) == 0) {
                marked.insert(sub);
            }
        }

        cout << marked.size() << "\n";
    }

    return 0;
}