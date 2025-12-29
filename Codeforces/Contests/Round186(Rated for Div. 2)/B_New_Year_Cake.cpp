#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

ll check(ll a,ll b,ll flag){
    ll cnt=0;
    ll val=1;
    while(1){
        if(flag==0){
            if(a>=val) a-=val;
            else break;
        } else{
            if(b>=val) b-=val;
            else break;
        }
        cnt++;
        val*=2;
        flag^=1;
    }
    return cnt;
}

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
    ll a,b;
    cin>>a>>b;
    cout<<max(check(a,b,0),check(a,b,1))<<"\n";
    return;
}