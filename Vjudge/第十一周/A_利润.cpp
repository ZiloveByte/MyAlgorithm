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
    pair<ll,ll> a[100050];
    priority_queue<ll,vector<ll>,greater<ll>> q; 
    for(int i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
    sort(a+1,a+n+1);
    ll sum=0;
    for(int i=1;i<=n;i++){
        if(a[i].first>q.size()){
            sum+=a[i].second;
            q.push(a[i].second);
        }else{
            if(q.size()&&a[i].second>q.top()){
                sum-=q.top();
                q.pop();
                sum+=a[i].second;
                q.push(a[i].second);
            }
        }
    }
    cout<<sum<<"\n";
    return;
}