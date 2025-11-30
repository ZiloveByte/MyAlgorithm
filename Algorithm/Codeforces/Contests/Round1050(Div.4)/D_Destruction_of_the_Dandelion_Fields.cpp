#include <bits/stdc++.h>
using namespace std;

void Nuyoah(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> odds;
    long long even_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) {
            odds.push_back(a[i]);
        } else {
            even_sum += a[i];
        }
    }

    if (odds.empty()) {
        cout << 0 << endl;
        return;
    }
    sort(odds.rbegin(), odds.rend());

    int odd_count = odds.size();
    int can_cut_odd_count = 1 + (odd_count - 1) / 2;

    long long odd_sum = 0;
    for (int i = 0; i < can_cut_odd_count; i++) {
        odd_sum += odds[i];
    }
    cout << even_sum + odd_sum << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        Nuyoah();
    }
    return 0;
}