#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    vector<ll> b(3);
    cin>>b[0]>>b[1]>>b[2];
    for(int i=0;i<3;i++){
        vector<ll> a=b;
        a[i]*=2;
        sort(a.begin(),a.end());
        if(a[0]+a[1]>a[2]) {
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    return;
}