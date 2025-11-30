#include <bits/stdc++.h>
using namespace std;

char a[3];

void zilove(){
    sort(a,a+3);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    while(cin>>a[0]>>a[1]>>a[2]){
        zilove();
    }
    return 0;
}