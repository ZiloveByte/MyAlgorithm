#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int P;
    cin >> P;
    
    cout << (int)(P * log10(2.0)) + 1 << '\n';
    
    vector<int> ans(500, 0);
    ans[0] = 1;
    
    vector<int> base(500, 0);
    base[0] = 2;
    
    int p = P;
    while (p > 0) {
        if (p & 1) {
            vector<int> temp(500, 0);
            for (int i = 0; i < 500; i++) {
                for (int j = 0; j < 500 - i; j++) {
                    temp[i + j] += ans[i] * base[j];
                }
            }
            for (int i = 0; i < 499; i++) {
                temp[i + 1] += temp[i] / 10;
                temp[i] %= 10;
            }
            temp[499] %= 10;
            ans = temp;
        }
        
        vector<int> temp(500, 0);
        for (int i = 0; i < 500; i++) {
            for (int j = 0; j < 500 - i; j++) {
                temp[i + j] += base[i] * base[j];
            }
        }
        for (int i = 0; i < 499; i++) {
            temp[i + 1] += temp[i] / 10;
            temp[i] %= 10;
        }
        temp[499] %= 10;
        base = temp;
        
        p >>= 1;
    }
    
    ans[0]--;
    if (ans[0] < 0) {
        ans[0] = 9;
        for (int i = 1; i < 500; i++) {
            if (ans[i] > 0) {
                ans[i]--;
                break;
            }
            ans[i] = 9;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 50; j++) {
            cout << ans[499 - i * 50 - j];
        }
        cout << '\n';
    }
    
    return 0;
}