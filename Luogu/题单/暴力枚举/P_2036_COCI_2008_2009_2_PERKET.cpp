#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    int n;
    cin>>n;
    vector<ll>s(n),b(n);
    for(int i=0;i<n;i++)cin>>s[i]>>b[i];
    ll minn=LLONG_MAX;
    for (int mask = 1; mask < (1 << n); mask++) {
        ll sd = 1;
        ll kd = 0; 

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)){
                sd *= s[i];
                kd += b[i];
            }
        }

        ll diff = abs(sd - kd);
        minn = min(minn, diff);
    }

    cout << minn << endl;

}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}