#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void check(ll n){
    bool flag=false;
    while(n!=0){
        ll t=log2(n);
        if(flag) cout<<"+";
        if(t==1) cout<<"2";
        else if(t==0) cout<<"2(0)";
        else{
            cout<<"2(";
            check(t);
            cout<<")";
        }
        n-=pow(2,t);
        flag=true;
    }
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    ll n;
    cin>>n;
    check(n);
    return;
}