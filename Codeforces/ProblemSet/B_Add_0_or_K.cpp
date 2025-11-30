#include <bits/stdc++.h>
using namespace std;

using ll = long long;

long long exgcd(long long a, long long b, long long &x, long long &y){
    if(!b){ x = 1; y = 0; return a; }
    long long x1, y1;
    long long g = exgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

long long mod_inv(long long a, long long mod){
    long long x, y;
    long long g = exgcd(a, mod, x, y);
    x %= mod;
    if(x < 0) x += mod;
    return x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;
    while(T--){
        long long n, k; 
        cin >> n >> k;

        long long p;
        if(k & 1){
            p = 2;
        }else{
            int cand[] = {3,5,7,11,13,17,19,23,29};
            p = 0;
            for(int q : cand){
                if(k % q != 0){ p = q; break; }
            }
            if(p == 0){
                long long q = 31;
                auto isPrime = [](long long x){
                    if(x < 2) return false;
                    for(long long i = 2; i * i <= x; ++i)
                        if(x % i == 0) return false;
                    return true;
                };
                while(true){
                    if(isPrime(q) && k % q != 0){ p = q; break; }
                    q += 2;
                }
            }
        }

        long long invk = 0;
        if(std::gcd(k, p) == 1) invk = mod_inv(k % p, p);

        for(int i = 0; i < n; ++i){
            long long a; 
            cin >> a;
            if(p == 2){
                if(a & 1) a += k;
                cout << a << (i + 1 == n ? '\n' : ' ');
            }else{
                long long need = (p - (a % p)) % p;
                long long m = (invk * need) % p;
                cout << (a + m * k) << (i + 1 == n ? '\n' : ' ');
            }
        }
    }
    return 0;
}