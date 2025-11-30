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
    int n=0,lens=0;
    vector<int> a(1e5),f(1e5),g(1e5);
    while(cin>>a[n]) n++;
    for(int i=0;i<n;i++){
        int pos=upper_bound(f.begin(),f.begin()+lens,a[i],greater<int>())-f.begin();
        if(pos==lens) f[lens++] =a[i];
        else f[pos]=a[i];
    }
    cout<<lens<<"\n";
    int cnt=0;
    for(int i=0;i<n;i++){
        int k=0;
        while(k<cnt&&g[k]<a[i]) k++;
        g[k]=a[i];
        if(k>=cnt) cnt++;
    }
    cout<<cnt<<"\n";
}
