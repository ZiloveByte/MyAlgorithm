#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for (int i = 0; i < n; ++i) {
            cin >> doors[i];
        }
        
        // 找到所有关闭的门的位置
        vector<int> closed_doors;
        for (int i = 0; i < n; ++i) {
            if (doors[i] == 0) {
                closed_doors.push_back(i);
            }
        }
        
        // 如果没有关闭的门（题目保证至少有一个，所以这行可以省略）
        if (closed_doors.empty()) {
            cout << "YES" << endl;
            continue;
        }
        
        // 计算第一个和最后一个关闭的门的位置
        int first_closed = closed_doors.front();
        int last_closed = closed_doors.back();
        
        // 计算需要覆盖的区间长度
        int required_coverage = last_closed - first_closed + 1;
        
        if (x >= required_coverage) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}