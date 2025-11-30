#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(ll n){
    ll res=1;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        if(temp%2==1){
            res*=temp;
        }
    }
    cout<<res<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n;
    while(cin>>n){
        zilove(n);
    }
    return 0;
}