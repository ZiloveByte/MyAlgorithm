#include <bits/stdc++.h>
using namespace std;

// Miller-Rabin
int mul(int a, int b, int m) {
    int r = a * b - m * int(1.L / m * a * b);
    return r - m * (r >= m) + m * (r < 0);
}
int pow(int a, int b, int m) {
    int res = 1 % m;
    for (; b; b >>= 1, a = mul(a, a, m)) {
        if (b & 1) res = mul(res, a, m);
    }
    return res;
}
bool isprime(int n) {
    if (n < 2 || n % 6 % 4 != 1) {
        return (n | 1) == 3;
    }
    int s = __builtin_ctzll(n - 1), d = n >> s;
    for (int a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
        int p = pow(a % n, d, n), i = s;
        while (p != 1 && p != n - 1 && a % n && i--) {
            p = mul(p, p, n);
        }
        if (p != n - 1 && i != s) return false;
    }
    return true;
}

void Nuyoah(){
    int n,k;
    cin>>n>>k;
    vector<int> x(n);
    for (int i=0;i<n;i++)cin>>x[i];
    vector<int>sums;
    vector<bool>sel(n,false);
    fill(sel.begin(),sel.begin()+k,true);

    do{
        int sum=0;
        for(int i=0;i<n;i++){
            if(sel[i]) sum+=x[i];
        }
        sums.push_back(sum);
    } while(prev_permutation(sel.begin(), sel.end()));

    int cnt=0;
    for (auto val:sums){
        if(isprime(val))cnt++;
    }
    cout<<cnt<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
    return 0;
}