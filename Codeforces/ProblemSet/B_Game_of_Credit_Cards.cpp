#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    cin>>n;
    string s, m;
    cin >> s >> m;

    string a = s, b = m;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, nonloss = 0;
    while (i < n && j < n) {
        if (b[j] >= a[i]) {
            nonloss++;
            i++; j++;
        } else {
            j++;
        }
    }
    cout << (n - nonloss) << "\n";

    i = 0; j = 0;
    int wins = 0;
    while (i < n && j < n) {
        if (b[j] > a[i]) {
            wins++;
            i++; j++;
        } else {
            j++;
        }
    }
    cout << wins << "\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}