#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
constexpr int N =1e2+5;

int dp[N];

using ll=long long;
using ull=unsigned long long;

struct rubbish{
    int t,heal,hight;
}rub[N];

bool cmp(rubbish x,rubbish y){
    return x.t<y.t;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int d,g;
    cin>>d>>g;
    for(int i=1;i<=g;i++)cin>>rub[i].t>>rub[i].heal>>rub[i].hight;
    sort(rub+1,rub+g+1,cmp);
    dp[0]=10;
    for(int i=1;i<=g;i++){
        for(int j=d;j>=0;j--){
            if(dp[j]<rub[i].t) continue;
            if(j+rub[i].hight>=d){
                cout<<rub[i].t<<"\n";
                return;
            }
            if(j+rub[i].hight<=d) dp[j+rub[i].hight]=max(dp[j+rub[i].hight],dp[j]);
            dp[j]=dp[j]+rub[i].heal;
        }
    }
    cout<<dp[0]<<"\n";
    return;
}