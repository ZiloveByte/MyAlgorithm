#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];

    // Step 1: 找最大和最小
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    // Step 2: 最大加最小
    int result = mx + mn;

    // Step 3: 3次特殊处理
    // 假设是移除最大和最小各一次 + 另一个操作
    // 实际请根据题目而定，这里举例：移除最大最小后再取次大次小之和
    for(int t=0; t<3; ++t) {
        // 这里仅做示例，实际处理请根据题意
        a.erase(find(a.begin(), a.end(), mx));
        a.erase(find(a.begin(), a.end(), mn));
        if(a.empty()) break;
        mx = *max_element(a.begin(), a.end());
        mn = *min_element(a.begin(), a.end());
        result += mx + mn;
    }

    cout << result << endl;
    return 0;
}