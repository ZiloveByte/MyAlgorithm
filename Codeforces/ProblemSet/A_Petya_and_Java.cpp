#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

bool check(string a, string b) {
    if (a.length() < b.length()) return true;
    if (a.length() > b.length()) return false;
    return a <= b;
}

void solve() {
    string n;
    cin>>n;
    if (check(n, "127")) {
        cout << "byte" << "\n";
    } else if (check(n, "32767")) {
        cout << "short" << "\n";
    } else if (check(n, "2147483647")) {
        cout << "int" << "\n";
    } else if (check(n, "9223372036854775807")) {
        cout << "long" << "\n";
    } else {
        cout << "BigInteger" << "\n";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}