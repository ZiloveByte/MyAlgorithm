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
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    vector<int> idx(n);
    iota(idx.begin(),idx.end(),0);
    sort(idx.begin(), idx.end(), [&](int i,int j){ return a[i] < a[j]; });
    vector<ll> A(n),B(n);
    for(int i=0;i<n;i++){
        A[i]=a[idx[i]];
        B[i]=b[idx[i]];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        if(B[i]>=3) ans++;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(B[i]>=2&&B[j]>=1&&2*A[i]>A[j]) ans++;
            if(B[j]>=2&&B[i]>=1) ans++;
        }
    }
    for(int i=2;i<n;i++){
        int j=0,k=i-1;
        while(j<k){
            if(A[j]+A[k]>A[i]){
                ans+=(k-j);
                k--;
            }else{
                j++;
            }
        }
    }
    cout<<ans<<"\n";
}