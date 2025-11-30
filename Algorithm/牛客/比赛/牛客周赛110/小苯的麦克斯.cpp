#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll maxn=0LL;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxn)maxn=a[i];
    }
    ll mark=lower_bound(a.begin(),a.end(),maxn)-a;
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}