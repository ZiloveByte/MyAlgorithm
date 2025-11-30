#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,p1,p2;
    cin>>x>>y>>p1>>p2;
    if(x>y) cout<<"A\n";
    else if(y>x) cout<<"B\n";
    else if(x==y){
        if(p1<p2) cout<<"A\n";
        else if(p1>p2) cout<<"B\n";
        else cout<<"C\n";
    }
}