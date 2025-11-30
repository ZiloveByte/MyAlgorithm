#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct BigInt {
    vector<int> d;
    BigInt(ll x = 0) { *this = x; }
    BigInt& operator=(ll x){
        d.clear();
        if(x == 0) d.push_back(0);
        while(x){
            d.push_back(x % 10);
            x /= 10;
        }
        return *this;
    }
    void mul(int m){
        int carry = 0;
        for(size_t i = 0; i < d.size(); i++){
            long long cur = 1LL * d[i] * m + carry;
            d[i] = cur % 10;
            carry = cur / 10;
        }
        while(carry){
            d.push_back(carry % 10);
            carry /= 10;
        }
    }
    string str() const {
        string s;
        for(int i = (int)d.size() - 1; i >= 0; i--) s.push_back(d[i] + '0');
        return s;
    }
};

void Nuyoah(){
    int n;
    cin >> n;

    const double NEG = -1e100;
    vector<double> lg(n+1, 0.0);
    for(int i = 1; i <= n; i++) lg[i] = log((double)i);

    vector<double> dp(n+1, NEG);
    vector<int> pre(n+1, -1);
    dp[0] = 0.0;

    for(int i = 1; i <= n; i++){
        double vi = lg[i];
        for(int j = n; j >= i; j--){
            double cand = dp[j - i] + vi;
            if(cand > dp[j] + 1e-12){
                dp[j] = cand;
                pre[j] = i;
            }
        }
    }

    vector<int> ans;
    int cur = n;
    while(cur > 0){
        int pick = pre[cur];
        if(pick == -1){
            ans.push_back(cur);
            break;
        }
        ans.push_back(pick);
        cur -= pick;
    }
    sort(ans.begin(), ans.end());

    for(size_t i = 0; i < ans.size(); i++){
        if(i) cout << " ";
        cout << ans[i];
    }
    cout << "\n";

    BigInt prod(1);
    for(int x : ans) prod.mul(x);
    cout << prod.str() << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}
