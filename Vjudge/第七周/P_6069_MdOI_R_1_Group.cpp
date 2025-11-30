#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

int n;
long double m;
vector<long double> a(200050,0),sum(200050,0);

bool check(int l){
    for(int i=1;i<=n-l+1;i++){
        long double fc=0;
        long double avg=(sum[i+l-1]-sum[i-1])/l;
        for(int j=i;j<i+l;j++) fc=fc+(avg*avg)+(a[j]*a[j])-(2*a[j]*avg);
        if(fc<=m) return true;
    }
    return false;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a.begin()+1,a.begin()+n+1);
    for(int i=1;i<=n;i++) sum[i]=sum[i-1]+a[i];
    ll l=1,r=n,ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<n-ans<<"\n";
}