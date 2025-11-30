#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;

ll mex(vector<ll> a, ll index, ll n) {
    a[index] = LLONG_MAX;
    sort(a.begin(), a.end());
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < cnt) continue;
        if (a[i] == cnt) cnt++;
        else break;
    }
    return cnt;
}
    
void Nuyoah(){
    ll n,k,sum=0;
    cin>>n>>k;
    vector<ll> a(n),res(n),cnt(3);
    for(int i=0;i<n;i++)cin>>a[i];
    if(k<=3){
        for(int i=0;i<k;i++){
            sum=0;
            for(ll j=0;j<n;j++){
                res[j]=mex(a,j,n);
            }
            a=res;
            for(auto val:a){
                sum+=val;
            }
        }
    }else{
        for(int i=0;i<3;i++){
            sum=0;
            for(ll j=0;j<n;j++){
                res[j]=mex(a,j,n);
            }
            a=res;
            for(auto val:a){
                sum+=val;
            }
            cnt[i]=sum;
        }
        if(k%2==0) sum=cnt[1];
        else sum=cnt[2];
    }
    cout<<sum<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}