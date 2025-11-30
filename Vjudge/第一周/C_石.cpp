#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Nuyoah(){
    ll l,n,m;
    cin>>l>>n>>m;
    vector<ll> d(n);
    for(int i=0;i<n;i++)cin>>d[i];

    ll left=1,right=l,ans=1;
    while(left<=right){
        ll mid=(left+right)/2;
        ll cnt_rem=0,prev=0;
        for(int i=0;i<n;i++){
            if(d[i]-prev<mid) cnt_rem++;
            else prev=d[i];
        }
        if(cnt_rem<=m){
            ans=mid;
            left=mid+1;
        }else right=mid-1;
    }
    cout<<ans<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
    return 0;
}