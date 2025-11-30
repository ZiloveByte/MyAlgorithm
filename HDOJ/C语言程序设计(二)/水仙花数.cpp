#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n){
    ll sum=0;
    ll gw=n%10;
    ll sw=n/10%10;
    ll bw=n/100;
    sum+=gw*gw*gw+sw*sw*sw+bw*bw*bw;
    if(sum==n){
        return true;
    }else {
        return false;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll l,r;
    while(cin>>l>>r){
        bool flag=false;
        for(int i=l;i<=r;i++){
            if(check(i)){
                flag=true;
                cout<<i<<" ";
            }
        }
        if(flag==false) cout<<"no\n";
        else cout<<"\n";
    }
    return 0;
}