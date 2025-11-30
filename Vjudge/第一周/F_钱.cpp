#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 250000;

void Nuyoah(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<bool> mark(MAXN+1,false);
    mark[0]=true;
    ll ans=0;

    for (ll coin:a) {
        if (!mark[coin]) {
            ans++;
            for(int j=coin;j<=MAXN;j++){
                if(mark[j-coin]) mark[j]=true;
            }
        }
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) Nuyoah();
    return 0;
}