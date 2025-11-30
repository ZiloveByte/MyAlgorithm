#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    bool check=false;
    ll a,b,c,d[9]={1,2,3,4,5,6,7,8,9};
    cin>>a>>b>>c;
    if(a==0||b==0||c==0){
        cout<<"No!!!";
        return;
    }
    do{
        ll num1=d[0]*100+d[1]*10+d[2];
        ll num2=d[3]*100+d[4]*10+d[5];
        ll num3=d[6]*100+d[7]*10+d[8];
        if(num1*b==num2*a&&num2*c==num3*b){
            cout<<num1<<" "<<num2<<" "<<num3<<"\n";
            check=true;
        }
    }while(next_permutation(d,d+9));
    if(!check){
        cout<<"No!!!";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}