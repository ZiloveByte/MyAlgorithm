#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s=0,cj=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cj=1;
        for(int j=1;j<=i;j++){
            cj*=j;
        }
        s+=cj;
    }
    cout<<s;
}