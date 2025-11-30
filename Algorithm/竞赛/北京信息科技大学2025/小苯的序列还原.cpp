#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b;
    b.reserve(n);
    if(n%2){
        for(int i=n;i>=1;i-=2) b.push_back(i);
        for(int i=2;i<=n-1;i+=2) b.push_back(i);
    }else{
        for(int i=n;i>=2;i-=2) b.push_back(i);
        for(int i=1;i<=n-1;i+=2) b.push_back(i);
    }
    vector<ll> c(n);
    for(int i=0;i<n;i++){
        c[b[i]-1]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
}