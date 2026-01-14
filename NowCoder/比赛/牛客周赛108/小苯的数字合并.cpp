#include <bits/stdc++.h>
using namespace std;

const long long MODN=998244353;

long long qpow(long long a, long long b, long long c){
    long long result=1;
    a%=c;
    while(b>0){
        if(b&1){
            result=(result*a)%c;
        }
        a=(a*a)%c;
        b>>=1;
    }
    return result;
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"1\n";
    }else {
        cout<<qpow(2,n-1,MODN)<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Nuyoah();
    }
}