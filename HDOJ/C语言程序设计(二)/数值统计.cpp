#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(ll n){
    ll a=0,b=0,c=0;
    double temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp<0)a++;
        else if(temp==0)b++;
        else if(temp>0)c++;
    }
    cout<<a<<" "<<b<<" "<<c<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n;
    while(cin>>n&&n!=0){
        zilove(n);
    }
    return 0;
}