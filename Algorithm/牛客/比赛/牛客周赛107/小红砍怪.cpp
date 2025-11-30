#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Nuyoah(){
    ll n;
    cin>>n;
    ll res=0;
    vector<ll>gw(2*n);
    for(int i=0;i<2*n;i++)cin>>gw[i];
    vector<ll>begin(n+1,-1);
    vector<ll>end(n+1,-1);
    for(int i=0;i<2*n;i++){
        int val=gw[i];
        if(begin[val]==-1){
            begin[val]=i;
        }
        end[val]=i;
    }
    for(int i=1;i<=n;i++){
        int val=end[i]-begin[i]+1;
        if(val>res){
            res=val;
        }
    }
    cout<<res;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
    return 0;
}