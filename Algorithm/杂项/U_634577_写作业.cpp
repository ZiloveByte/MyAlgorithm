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
    int n;
    cin>>n;
    vector<pair<int,ll>> tesk(n);
    for(int i=0;i<n;i++) cin>>tesk[i].first>>tesk[i].second;
    sort(tesk.begin(),tesk.end());
    ll ans=0;
    vector<ll> arr;
    for(auto [d,p]:tesk){
        arr.push_back(p);
        sort(arr.begin(),arr.end());
        if(arr.size()>d) arr.erase(arr.begin());
    }
    for(auto val:arr) ans+=val;
    cout<<ans<<"\n";
}