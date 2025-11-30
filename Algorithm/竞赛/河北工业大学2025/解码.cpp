#include <bits/stdc++.h>
using namespace std;

void zilove() {
    // 图案模板定义（前8个为3行高，后4个为2行高）
    vector<vector<string>> FIGURES = {
        {"#..", "##.", "#.."},
        {".#.", ".##", ".#."},
        {".#.", "##.", "#.."},
        {"..#", ".##", ".#."},
        {".#.", "##.", ".#."},
        {"..#", ".##", "..#"},
        {"#..", "##.", ".#."},
        {".#.", ".##", "..#"},
        {".#.", "###"},
        {"##.", "##."},
        {".##", ".##"},
        {"###", ".#."}
    };

    // 对应的按键序列（每个按键出现两次）
    vector<string> KEYS = {
        "up", "up", "LT", "LT", "down", "down", "RT", "RT",
        "left", "A", "A", "right"
    };

    int n;
    cin >> n;

    // 存储所有点阵行
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    vector<string> result;
    int pos = 0;

    while (pos < n) {
        // 根据位置判断当前是3行还是2行的图案（前8个是3行）
        int patternHeight = (pos < 8) ? 3 : 2;
        vector<string> currentPattern;

        for (int i = 0; i < patternHeight && pos + i < n; ++i) {
            currentPattern.push_back(grid[pos + i]);
        }

        // 匹配模板
        int matchIndex = -1;
        for (int i = 0; i < FIGURES.size(); ++i) {
            if (FIGURES[i].size() != currentPattern.size()) continue;
            bool matched = true;
            for (int j = 0; j < currentPattern.size(); ++j) {
                if (FIGURES[i][j] != currentPattern[j]) {
                    matched = false;
                    break;
                }
            }
            if (matched) {
                matchIndex = i;
                break;
            }
        }

        if (matchIndex != -1) {
            result.push_back(KEYS[matchIndex]);
        }

        pos += currentPattern.size();
    }

    // 输出结果
    for (const auto& key : result) {
        cout << key << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    zilove();
    return 0;
}