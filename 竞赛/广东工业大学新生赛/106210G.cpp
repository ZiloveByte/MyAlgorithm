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
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int m = n + 1;
    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pre[i] = (pre[i - 1] + p[i - 1]) % m;
    }
    vector<bool> used(m, false);
    bool valid = true;
    if (used[0]) {
        valid = false;
    } else {
        used[0] = true;
    }

    for (int i = 1; i <= n; i++) {
        int s = pre[i];
        if (used[s]) {
            valid = false;
            break;
        }
        used[s]=true;
    }

    if (valid) {
        cout << m << ' ';
        for (int i = 0; i < n; i++) {
            cout<<p[i]<<" ";
        }
    }else{
        cout<<"-1";
    }
    cout<<"\n";
}