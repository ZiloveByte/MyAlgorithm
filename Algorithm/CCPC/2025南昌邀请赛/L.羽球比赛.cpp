#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==30)cout<<"Alice\n";
    else if(b==30)cout<<"Bob\n";
    else if(a<b&&b-a>=2&&b>=21)cout<<"Bob\n";
    else if(a>b&&a-b>=2&&a>=21)cout<<"Alice\n";
    else cout<<"Underway\n";
    return 0;
}