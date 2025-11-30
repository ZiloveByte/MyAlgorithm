#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(double n,double m){
    double sum=n;
    for(int i=1;i<m;i++){
        sum+=sqrt(n);
        n=sqrt(n);
    }
    cout<<fixed<<setprecision(2)<<sum<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double n,m;
    while(cin>>n>>m){
        zilove(n,m);
    }
    return 0;
}