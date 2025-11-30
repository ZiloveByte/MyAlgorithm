#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415927

void zilove(double r){
    double V;
    V=(4.0/3.0)*PI*r*r*r;
    cout<<fixed<<setprecision(3)<<V<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double r;
    while(cin>>r){
        zilove(r);
    }
    return 0;
}