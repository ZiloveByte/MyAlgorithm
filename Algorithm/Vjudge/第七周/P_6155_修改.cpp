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
    ll n;
    ull ans=0;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    vector<ll> stk,dis;
    stk.reserve(n);dis.reserve(n);
    ll pos=a[0];
    for(int i=0;i<n;){
        ll cur_pos=a[i];
        while(pos<cur_pos&&!stk.empty()){
            ll p=stk.back();
            stk.pop_back();
            dis.push_back(pos-p);
            pos++;
        }
        if(pos<cur_pos) pos=cur_pos;
        ll j=i;
        while(j<n&&a[j]==cur_pos) j++;
        ll cnt=j-i;
        for(int k=0;k<cnt;k++) stk.push_back(cur_pos);
        ll p=stk.back();
        stk.pop_back();
        dis.push_back(pos-p);
        pos++;
        i=j;
    }
    while(!stk.empty()){
        ll p=stk.back();
        stk.pop_back();
        dis.push_back(pos-p);
        pos++;
    }
    sort(dis.begin(),dis.end());
    sort(b.begin(),b.end(),greater<ll>());
    for(int i=0;i<n;i++){
        ans+=(ull)dis[i]*(ull)b[i];
    }
    cout<<ans<<'\n';
}