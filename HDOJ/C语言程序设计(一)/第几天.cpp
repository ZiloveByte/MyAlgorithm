#include <bits/stdc++.h>
using namespace std;

// 每月天数，闰年与平年分开
const int days_leap[13]  = {0,31,29,31,30,31,30,31,31,30,31,30,31};
const int days_normal[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};

// 判断是否为闰年
bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// 计算日期是当年的第几天
int dayOfYear(int year, int month, int day) {
    const int* days = isLeap(year) ? days_leap : days_normal;
    int sum = 0;
    for(int i = 1; i < month; ++i)
        sum += days[i];
    return sum + day;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    while (getline(cin, line)) {
        int y, m, d;
        sscanf(line.c_str(), "%d/%d/%d", &y, &m, &d);
        cout << dayOfYear(y, m, d) << '\n';
    }
    return 0;
}