#include <bits/stdc++.h>
using namespace std;

const int base = 1000000000;
const int base_digits = 9;

struct bigint {
    vector<int> a;
    int sign;

    bigint() : sign(1) {}
    bigint(long long v) { *this = v; }
    bigint(const string &s) { read(s); }

    void operator=(const bigint &v) {
        sign = v.sign;
        a = v.a;
    }

    void operator=(long long v) {
        sign = 1;
        a.clear();
        if (v < 0) sign = -1, v = -v;
        for (; v > 0; v /= base) a.push_back(v % base);
    }

    void read(const string &s) {
        sign = 1;
        a.clear();
        int pos = 0;
        while (pos < (int)s.size() && (s[pos] == '-' || s[pos] == '+')) {
            if (s[pos] == '-') sign = -sign;
            ++pos;
        }
        for (int i = s.size() - 1; i >= pos; i -= base_digits) {
            int x = 0;
            for (int j = max(pos, i - base_digits + 1); j <= i; j++)
                x = x * 10 + s[j] - '0';
            a.push_back(x);
        }
        trim();
    }

    void trim() {
        while (!a.empty() && !a.back()) a.pop_back();
        if (a.empty()) sign = 1;
    }

    bool isZero() const {
        return a.empty() || (a.size() == 1 && !a[0]);
    }
    void operator*=(int v) {
        if (v < 0) sign = -sign, v = -v;
        for (int i = 0, carry = 0; i < (int)a.size() || carry; ++i) {
            if (i == (int)a.size()) a.push_back(0);
            long long cur = a[i] * (long long)v + carry;
            carry = (int)(cur / base);
            a[i] = (int)(cur % base);
        }
        trim();
    }

    bigint operator*(int v) const {
        bigint res = *this;
        res *= v;
        return res;
    }
    friend ostream &operator<<(ostream &stream, const bigint &v) {
        if (v.sign == -1) stream << '-';
        if (v.a.empty()) stream << 0;
        else {
            stream << v.a.back();
            for (int i = (int)v.a.size() - 2; i >= 0; --i)
                stream << setw(base_digits) << setfill('0') << v.a[i];
        }
        return stream;
    }
    string to_string() const {
        ostringstream oss;
        oss << *this;
        return oss.str();
    }
};

bigint factorial(int n) {
    bigint res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n >> a;
        if (n == 0 || n == 1) {
            // 0! = 1! = 1
            cout << (a == 1 ? 1 : 0) << '\n';
            continue;
        }
        bigint f = factorial(n);
        string s = f.to_string();

        int cnt = 0;
        for (char c : s) {
            if (c == '0' + a) cnt++;
        }
        cout << cnt << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}