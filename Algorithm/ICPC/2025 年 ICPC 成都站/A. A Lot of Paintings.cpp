#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
constexpr int base = 1000000;

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
    ll n,sum=0,cnt=0;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]>0) cnt++;
    }
    if(sum==100){
        cout<<"Yes\n";
        for(int val:a) cout<<val<<" ";
        cout<<"\n";
        return;
    }
    if(sum<100){
        ll d=100-sum;
        if(d*2>=n){
            cout<<"No\n";
            return;
        }
        ll tail=base*d/n;
        for(int i=0;i<n;i++){
            a[i]*=base;
            a[i]+=tail;
        }
        cout<<"Yes\n";
        for(int val:a) cout<<val<<" ";
        cout<<"\n";
        return;
    }else{
        ll d=sum-100;
        if(2*d>cnt){
            cout<<"No\n";
            return;
        }
        ll tail=base*d/cnt;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                continue;
            }
            a[i]*=base;
            a[i]-=tail;
        }
        cout<<"Yes\n";
        for(int val:a) cout<<val<<" ";
        cout<<"\n";
        return;
    }
}