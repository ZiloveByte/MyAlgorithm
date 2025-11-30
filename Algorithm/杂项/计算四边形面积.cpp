#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    int ax,ay,bx,by,cx,cy,dx,dy;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    double s = 0.5*abs(ax*by+bx*cy+cx*dy+dx*ay-ay*bx-by*cx-cy*dx-dy*ax);
    cout<<fixed<<setprecision(2)<<s;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}