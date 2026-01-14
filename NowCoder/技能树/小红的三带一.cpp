#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = 0;
    int pos = 0;

    while(pos <= n - 4) {
        int x = a[pos], y = a[pos+1], z = a[pos+2], w = a[pos+3];
        
        if((x == y && x == z && x != w) || 
           (x == y && x == w && x != z) || 
           (x == z && x == w && x != y) || 
           (y == z && y == w && y != x)) {
            result++;
            pos += 4;
        } else {
            pos++;
        }
    }

    cout << result << "\n";
    return 0;
}