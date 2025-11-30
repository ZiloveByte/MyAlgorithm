#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,val;
    cin>>n;
    for(int i=n;i>=1;i--){
        cin>>val;
        if(val==0) continue;
        if(i==1&&val==1){
            cout<<"+"<<"x";
            continue;
        }else if(i==1&&val>0){
            cout<<"+"<<val<<"x";
            continue;
        }else if(i==1&&val==-1){
            cout<<"-"<<"x";
            continue;
        }else if(i==1&&val<=0){
            cout<<val<<"x";
            continue;
        }
        if(val==1&&i==n){
            cout<<"x^"<<i;
        }else if(val>0&&i==n){
            cout<<val<<"x^"<<i;
        }else if(val==-1&&i==n){
            cout<<"-x^"<<i;
        }else if(val==1){
            cout<<"+x^"<<i;
        }else if(val>0){
            cout<<"+"<<val<<"x^"<<i;
        }else if(val<0&&val==-1){
            cout<<"-x^"<<i;
        }else if(val<0){
            cout<<val<<"x^"<<i;
        }
    }
    cin>>val;
    if(val>0) cout<<"+"<<val;
    else if(val<0) cout<<val;
    return 0;
}