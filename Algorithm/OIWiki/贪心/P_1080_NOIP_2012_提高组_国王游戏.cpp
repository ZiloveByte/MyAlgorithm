#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll = long long;
using ull = unsigned long long;

struct node
{
    int a, b;
    bool operator<(const node &x) const
    {
        return 1LL * a * b < 1LL * x.a * x.b; // 修正：按 a*b 升序
    }
};

// 高精度整数（仅非负，小端存储）
struct BigInt {
    vector<int> digits;
    BigInt(ull x = 0) {
        if (x == 0) digits.push_back(0);
        while (x) {
            digits.push_back(x % 10);
            x /= 10;
        }
    }

    void operator*=(int x) {
        if (x == 0) {
            *this = BigInt(0);
            return;
        }
        ull carry = 0;
        for (size_t i = 0; i < digits.size(); ++i) {
            carry += 1ULL * digits[i] * x;
            digits[i] = carry % 10;
            carry /= 10;
        }
        while (carry) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }

    BigInt operator/(int x) const {
        BigInt res;
        res.digits.clear();
        ull rem = 0;
        bool started = false;
        for (int i = (int)digits.size() - 1; i >= 0; --i) {
            rem = rem * 10 + digits[i];
            if (rem >= (ull)x || started) {
                res.digits.push_back(rem / x);
                rem %= x;
                started = true;
            }
        }
        if (res.digits.empty()) res.digits.push_back(0);
        reverse(res.digits.begin(), res.digits.end());
        return res;
    }

    bool operator<(const BigInt& o) const {
        if (digits.size() != o.digits.size())
            return digits.size() < o.digits.size();
        for (int i = (int)digits.size() - 1; i >= 0; --i)
            if (digits[i] != o.digits[i])
                return digits[i] < o.digits[i];
        return false;
    }

    friend ostream& operator<<(ostream& os, const BigInt& b) {
        for (int i = (int)b.digits.size() - 1; i >= 0; --i)
            os << b.digits[i];
        return os;
    }
};

void Nuyoah()
{
    int n, a, b;
    cin >> n;
    vector<node> dc(n), res(n + 1); // res 保留但不用
    cin >> a >> b;
    ull s = 1; // s 保留但不用
    for (int i = 0; i < n; i++)
        cin >> dc[i].a >> dc[i].b;
    sort(dc.begin(), dc.end());
    
    BigInt prod(a);      // 高精度 prod
    BigInt maxrew(0);    // 高精度 maxrew

    for (int i = 0; i < n; i++)
    {
        BigInt rew = prod / dc[i].b;
        if (maxrew < rew)
            maxrew = rew;
        prod *= dc[i].a;
    }

    cout << maxrew << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}