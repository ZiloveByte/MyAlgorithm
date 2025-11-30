#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

bool check(string s){
    ll sum_digits =0;
    int cnt2=0;
    int cnt3=0;
    for(auto c:s){
        int digit=c-'0';
        sum_digits+=digit;
        if(digit==2){
            cnt2++;
        }else if(digit==3){
            cnt3++;
        }
    }
    int r_init=sum_digits%9;
    if(r_init==0){
        return true;
    }
    int target_delta=(9-r_init)%9;
    for (int i=0;i<=min(cnt2, 8);i++){
        for (int j=0;j<=min(cnt3,2);j++){
            if ((i*2+j*6)%9==target_delta){
                return true;
            }
        }
    }
    return false;
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
    string n;
    cin>>n;
    if(check(n)) cout<<"YES\n";
    else cout<<"NO\n";
}