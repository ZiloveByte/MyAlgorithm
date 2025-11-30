#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    char c;
    cin >> N >> c;
    
    if (N < 1) {
        cout << 0 << endl;
        return 0;
    }
    
    int k = sqrt((N + 1) / 2);
    while (2 * k * k - 1 > N) {
        k--;
    }
    
    int max_len = 2 * k - 1;
    int used = 2 * k * k - 1;
    
    // 打印上半部分（包括中间行）
    for (int i = k; i >= 1; i--) {
        int stars = 2 * i - 1;
        int spaces = (max_len - stars) / 2;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << c;
        }
        cout << endl;
    }
    
    // 打印下半部分（不包括中间行）
    for (int i = 2; i <= k; i++) {
        int stars = 2 * i - 1;
        int spaces = (max_len - stars) / 2;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < stars; j++) {
            cout << c;
        }
        cout << endl;
    }
    
    cout << N - used << endl;
    
    return 0;
}