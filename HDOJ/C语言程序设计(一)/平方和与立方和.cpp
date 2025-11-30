#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(ll l,ll r){
    ll sumo=0,sumj=0;
    if(l>r)swap(l,r);
    for(ll i=l;i<=r;i++){
        if(i%2==0){
            sumo+=i*i;
        }else{
            sumj+=i*i*i;
        }
    }
    cout<<sumo<<" "<<sumj<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll l,r;
    while(cin>>l>>r){
        zilove(l,r);
    }
    return 0;
}