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
    int n;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        mp[val]++;
    }
    for(auto [i,j]:mp){
        if(j>=3){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}