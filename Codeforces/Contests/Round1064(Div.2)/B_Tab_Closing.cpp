#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    double a, b, n;
    cin >> a >> b >> n;
    double mx = 1.0 * a, mn = 1.0 * a / n;
    if(b >= mx || b <= mn){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
    }
}