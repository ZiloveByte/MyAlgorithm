#include <bits/stdc++.h>
using namespace  std;
#define x first
#define y second

int main () {
    int n, m; cin >> n >> m;
    map<string, string> level;
    for (int i = 0; i < n; i ++) {
        string s, lev; cin >> s >> lev;
        level[s] = lev;
    }
    for (int i = 0; i < m; i ++) {
        string s; cin >> s;
        if (level.count(s)) cout << level[s] << endl;
        else {
            int cnt = 0;
            string res;
            for (auto &p : level) {
                if (p.x.size() < s.size() 
                    && s.substr(0, p.x.size()) == p.x
                    && level.count(s.substr(p.x.size())))
                    cnt ++, res = p.y + level[s.substr(p.x.size())];
            }
            if (cnt != 1) res = "D";
            cout << res << endl;
        }
    }
    return 0;
}