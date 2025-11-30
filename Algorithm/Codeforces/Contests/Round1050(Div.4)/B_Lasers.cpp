#include <bits/stdc++.h>
using namespace std;

void Nuyoah() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int h_count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] <= y) h_count++;
    }
    
    int v_count = 0;
    for(int i = 0; i < m; i++) {
        if(b[i] <= x) v_count++;
    }
    
    cout << h_count + v_count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        Nuyoah();
    }
    return 0;
}