#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    struct Rect { int a, b, g, k; };
    vector<Rect> rects(n);
    for (int i = 0; i < n; ++i) {
        cin >> rects[i].a >> rects[i].b >> rects[i].g >> rects[i].k;
    }
    int x, y;
    cin >> x >> y;

    int ans = -1;
    for (int i = n - 1; i >= 0; --i) {
        ll a = rects[i].a;
        ll b = rects[i].b;
        ll g = rects[i].g;
        ll k = rects[i].k;
        if (x >= a && x <= a + g && y >= b && y <= b + k) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}