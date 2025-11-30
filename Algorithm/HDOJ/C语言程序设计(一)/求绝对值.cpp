#include <bits/stdc++.h>
using namespace std;

void zilove(double a){
    cout<<fixed<<setprecision(2)<<abs(a)<<"\n";

}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double a;
    while(cin>>a){
        zilove(a);
    }
    return 0;
}