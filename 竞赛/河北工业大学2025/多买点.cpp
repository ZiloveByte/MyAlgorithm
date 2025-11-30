#include <bits/stdc++.h>
using namespace std;

void zilove() {
    int n;
    cin >> n;

    vector<pair<long long, long long>> discounts(n);
    for (int i = 0; i < n; ++i) {
        cin >> discounts[i].first >> discounts[i].second;
    }

    // 按照 l_i 排序，便于后续二分查找
    sort(discounts.begin(), discounts.end());

    // 预处理：去除无效的折扣（如果存在更小的 l_i 却更大的折扣）
    vector<pair<long long, long long>> valid_discounts;
    long long min_l = LLONG_MAX, max_d = 0;
    for (auto it = discounts.rbegin(); it != discounts.rend(); ++it) {
        if (it->second > max_d) {
            valid_discounts.push_back(*it);
            max_d = it->second;
            min_l = it->first;
        }
    }
    reverse(valid_discounts.begin(), valid_discounts.end());

    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;

        long long base_cost = k; // 不使用折扣的花费

        // 使用二分查找找到满足条件的最小折扣
        long long min_cost = base_cost;
        for (const auto& [l, d] : valid_discounts) {
            if (k >= l) {
                min_cost = min(min_cost, k - d);
            } else {
                // 找到第一个 l <= k 的折扣
                break;
            }
        }

        cout << min_cost << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    zilove();
    return 0;
}