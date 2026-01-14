#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ull=unsigned long long;

ll lens(ll x){
    int d=0;
    do{
        d++;
        x/=10;
    } while(x);
    return d;
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    array<ll,11> all{}; 
    array<ll,11> odd{}; 
    array<ll,11> even{};

    for(ll val:a){
        int r=val%11;
        if(lens(val)%2==1)odd[r]++;
        else even[r]++;
        all[r]++;
    }

    ll ans=0;
    for(int i=0;i<11;i++)ans+=odd[i]*(all[i]-1);
    for(int i=0;i<11;i++){
        int ropp=(11-i)%11;
        ans+=even[i]*all[ropp];
    }
    ans-=even[0];
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}