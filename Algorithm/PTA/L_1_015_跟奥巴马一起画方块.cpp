#include <bits/stdc++.h>
using namespace std;

void zilove(){
    int n,z;
    cin>>n;
    if(n%2==0){
        z=n/2;
    }else{
        z=(n/2)+1;
    }
    char s;
    cin>>s;
    for(int i=0;i<z;i++){
        for(int j=0;j<n;j++){
            cout<<s;
        }
        cout<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}