#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, T;
    if (!(cin >> S >> T)) return 0;

    int ans = 0;
    size_t start = 0; // 我们每次只在 S 的后缀 S[start..] 中查找

    while (!T.empty()) {
        // 在 S 的后缀中查找 T
        size_t pos = S.find(T, start);
        if (pos != string::npos) {
            // 找到了，执行一次匹配删除
            ++ans;
            // 删除 S 的前缀到 pos+T.size()，等价于把 start 移到该位置之后
            start = pos + T.size();
            // 同时删除 T 的首字符
            T.erase(T.begin());
            // 如果 start 超过了 S 的长度，后续查找一定失败，但流程仍按规则继续删 T 的首字符
            if (start > S.size()) start = S.size();
        } else {
            // 没找到，删除 T 的首字符
            T.erase(T.begin());
        }
    }

    cout << ans << '\n';
    return 0;
}