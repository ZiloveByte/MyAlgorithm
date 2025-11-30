#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

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
    ll n,m,k,b,cnt=0;
    cin>>n>>m>>k>>b;
    vector<ll> sum(n,0),num(n,0);
    vector<vector<ll>> s(n,vector<ll>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            sum[i]+=s[i][j];
            if(s[i][j]<=0) num[i]++;
            else num[i]--;
        }
    }
    for(int i=0;i<n;i++){
        if(sum[i]>=k) cnt++;
        else if(b&&sum[i]+num[i]>=k){
            cnt++;
            b--;
        }
    }
    cout<<cnt<<"\n";
}