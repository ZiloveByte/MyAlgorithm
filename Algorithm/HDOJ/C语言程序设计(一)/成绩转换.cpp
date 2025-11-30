#include <bits/stdc++.h>
using namespace std;

void zilove(int t){
    if(t>=90 and t<=100) cout<<"A\n";
    else if(t>=80 and t<=89) cout<<"B\n";
    else if(t>=70 and t<=79) cout<<"C\n";
    else if(t>=60 and t<=69) cout<<"D\n";
    else if(t>=0 and t<=59) cout<<"E\n";
    else cout<<"Score is error!\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    while(cin>>t){
        zilove(t);
    }
    return 0;
}