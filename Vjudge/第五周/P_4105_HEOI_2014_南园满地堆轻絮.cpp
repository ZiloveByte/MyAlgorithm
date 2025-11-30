#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

const int MAXN = 5e6 + 7;
ll SA, SB, SC, SD, HA;
ll a[MAXN], n, b[MAXN];

ll F(ll x){
    return ((x*x%HA*x%HA*SA%HA)+(x*x%HA*SB%HA)+(x*SC%HA)+SD)%HA;
}

bool check(ll k){
    memcpy(b, a, sizeof a);
    b[1]=max(0ll,b[1]-k);
    for(int i=2;i<=n;i++){
        b[i]=max(b[i-1],b[i]-k);
        if (abs(a[i]-b[i])>k) return false;
    }
    return true;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    ll l=0,r=INT_MAX;
    cin>>n>>SA>>SB>>SC>>SD>>a[1]>>HA;
    r=max(r,a[1]);
    for(int i=2;i<=n;i++){
        a[i] = (F(a[i-1]) + F(a[i-2])) % HA;
        r=max(r,a[i]);
    }
    ll ans=r;
    while(l<=r){
        ll mid=(l+r)>>1ll;
        if(check(mid)) ans=mid,r=mid-1;
        else l=mid+1;
    }
    cout<<ans<<"\n";
}