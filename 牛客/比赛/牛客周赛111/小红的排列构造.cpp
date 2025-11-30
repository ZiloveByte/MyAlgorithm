#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

void Nuyoah(){
    ll n,k;
    cin>>n>>k;

    if(k<(n+1)/2){
        cout<<-1<<'\n';
        return;
    }

    ll t=n-k;
    vector<ll> a(n+1);
    int index=1;

    for(int i=0;i<t-1;i++){
        a[index]=index+1;
        a[index+1]=index;
        index+=2;
    }

    if(index<=n){
        for(int i=index;i<n;i++) a[i]=i+1;
        a[n]=index;
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}