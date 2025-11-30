#include <bits/stdc++.h>
using namespace std;
constexpr int mod = 1e9+7;
using ll=long long;

struct Matrix {
  ll a[3][3];

  Matrix() { memset(a, 0, sizeof a); }

  Matrix operator*(const Matrix &b) const {
    Matrix res;
    for (ll i = 1; i <= 2; ++i)
      for (ll j = 1; j <= 2; ++j)
        for (ll k = 1; k <= 2; ++k)
          res.a[i][j] = (res.a[i][j] + a[i][k] * b.a[k][j]) % mod;
    return res;
  }
} ans, base;

void init() {
  base.a[1][1] = base.a[1][2] = base.a[2][1] = 1;
  ans.a[1][1] = ans.a[1][2] = 1;
}

void qpow(ll b) {
  while (b) {
    if (b & 1) ans = ans * base;
    base = base * base;
    b >>= 1;
  }
}

int main() {
  ll n;
  cin>>n;
  if (n <= 2) return puts("1"), 0;
  init();
  qpow(n - 2);
  cout<<(ans.a[1][1]*(ans.a[1][1]+ans.a[1][2]))%mod<<"\n";
}