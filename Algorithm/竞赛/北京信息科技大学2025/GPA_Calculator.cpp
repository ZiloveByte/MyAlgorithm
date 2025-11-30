#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    double x;
    cin>>x;
    if(x<60){
        cout<<"0.00\n";
        return;
    }
    x-=60;
    cout<<fixed<<setprecision(2)<<1.0+x/10;
    return;
}