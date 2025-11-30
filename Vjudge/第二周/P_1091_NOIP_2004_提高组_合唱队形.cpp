#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<ll> q(n,1),h(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i])q[i]=max(q[i],q[j]+1);
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[i]) h[i]=max(h[i],h[j]+1);
        }
    }
    ll res=0;
    for(int i=0;i<n;i++) res=max(res,q[i]+h[i]-1);
    cout<<(n-res);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}