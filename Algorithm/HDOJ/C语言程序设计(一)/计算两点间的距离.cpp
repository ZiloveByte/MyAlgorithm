#include <bits/stdc++.h>
using namespace std;

void zilove(double x1,double y1,double x2,double y2){
    double dis;
    double dx=x2-x1;
    double dy=y2-y1;
    dis=sqrt(dx*dx+dy*dy);
    cout<<fixed<<setprecision(2)<<dis<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2){
        zilove(x1,y1,x2,y2);
    }
    return 0;
}