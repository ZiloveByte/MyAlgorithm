#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> a[i];

    // 存储每个数的两个出现位置
    unordered_map<int, pair<int, int>> pos;
    for (int i = 0; i < 2 * n; ++i) {
        if (pos[a[i]].first == 0 && pos[a[i]].second == 0)
            pos[a[i]].first = i;
        else
            pos[a[i]].second = i;
    }

    // 初始权值
    long long base = 0;
    for (auto &[k, p] : pos)
        base += abs(p.second - p.first) - 1;

    long long ans = base;

    // 枚举所有不同的数对
    vector<int> keys;
    for (auto &[k, _] : pos)
        keys.push_back(k);

    for (int i = 0; i < keys.size(); ++i) {
        int x = keys[i];
        auto px = pos[x];
        for (int j = i + 1; j < keys.size(); ++j) {
            int y = keys[j];
            auto py = pos[y];

            // 尝试交换四种组合：x的两个位置分别与y的两个位置交换
            for (auto [x_idx, y_idx] : vector<pair<int, int>>{
                     {px.first, py.first},
                     {px.first, py.second},
                     {px.second, py.first},
                     {px.second, py.second}}) {

                // 如果交换的是相同位置，跳过
                if (x_idx == y_idx) continue;

                // 原来的值
                int ax = a[x_idx], ay = a[y_idx];

                // 模拟交换
                a[x_idx] = ay;
                a[y_idx] = ax;

                // 更新对应数字的新位置
                auto new_px1 = (ay == x ? y_idx : px.first);
                auto new_px2 = (ay == x ? px.first == x_idx ? px.second : px.first : px.second);
                auto new_py1 = (ax == y ? x_idx : py.first);
                auto new_py2 = (ax == y ? py.first == y_idx ? py.second : py.first : py.second);

                // 计算变化量
                long long delta = 0;
                delta -= abs(px.second - px.first) - 1;
                delta -= abs(py.second - py.first) - 1;
                delta += abs(new_px2 - new_px1) - 1;
                delta += abs(new_py2 - new_py1) - 1;

                ans = max(ans, base + delta);

                // 回退交换
                a[x_idx] = ax;
                a[y_idx] = ay;
            }
        }
    }

    cout << ans << endl;
    return 0;
}