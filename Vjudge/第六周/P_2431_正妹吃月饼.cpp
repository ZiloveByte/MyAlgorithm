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
    ll a,b,sum=0;
    cin>>a>>b;
    vector<ll> ws(63);
    ws[0]=1;
    for(int i=1;i<=62;i++) ws[i]=ws[i-1]<<1;
    for(int i=0;i<=62;i++){
        if(a&ws[i]) sum++;
        if(ws[i]>a) break;
    }
    for(int i=0;i<=62;i++){
        if(!(a&ws[i])){
            if(a+ws[i]<=b) a+=ws[i],sum++;
            else break;
        }
    }
    cout<<sum<<"\n";
    return;
}