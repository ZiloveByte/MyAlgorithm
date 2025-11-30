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
    ll n,m,k;
    cin>>n>>m>>k; 
    vector<ll> a(n+1),b(n+1),cost(n+1);
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++){
        cin>>b[i];
        cost[i]=ceil((a[i]+b[i])/64.0);
    }
    ll used=0,cnt=0;
    if(k) m+=10;
    for(int i=1;i<=n;i++){
        if(used+cost[i]<=m){
            used+=cost[i];
            cnt++;
        }else break;
    }
    cout<<cnt<<"\n";
    return;
}