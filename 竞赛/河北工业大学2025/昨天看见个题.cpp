#include <bits/stdc++.h>
using namespace std;

long long fast_pow(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void zilove() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        long long b, P;
        cin >> n >> b >> P;
        
        long long a_mod_b = 1;
        long long a_mod_P = 1;
        
        for (int i = 0; i < n; ++i) {
            long long p, k;
            cin >> p >> k;
            long long pow_pk_b = fast_pow(p, k, b);
            a_mod_b = (a_mod_b * pow_pk_b) % b;
            long long pow_pk_P = fast_pow(p, k, P);
            a_mod_P = (a_mod_P * pow_pk_P) % P;
        }
        
        long long floor_ab_mod_P = (a_mod_P - a_mod_b % P + P) % P;
        floor_ab_mod_P = (floor_ab_mod_P * fast_pow(b, P - 2, P)) % P;
        
        cout << floor_ab_mod_P << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    zilove();
    return 0;
}