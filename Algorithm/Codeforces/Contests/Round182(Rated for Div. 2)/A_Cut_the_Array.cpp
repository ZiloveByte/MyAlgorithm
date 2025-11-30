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
    vector<ll> sum(n+1,0),a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(int l=1;l<=n;l++){
        for(int r=l+1;r<=n;r++){
            ll s1,s2,s3;
            s1=sum[l]%3;
            s2=(sum[r]-sum[l])%3;
            s3=(sum[n]-sum[r])%3;
            if((s1==s2&&s2==s3)||(s1!=s2&&s2!=s3&&s1!=s3)){
                cout<<l<<" "<<r<<"\n";
                return;
            }
        }
    }
    cout<<"0 0\n";
    return;
}