#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Nuyoah(){
    int n;
    cin>>n;
    vector<ll>d(n);
    for(int i=0;i<n;i++)cin>>d[i];
    
    ll ans=d[0];
    for(int i=1;i<n;i++){
        if(d[i]>d[i-1]) ans+=d[i]-d[i-1];
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
    return 0;
}