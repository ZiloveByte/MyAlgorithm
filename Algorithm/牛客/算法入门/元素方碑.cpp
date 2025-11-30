#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    int t;
    scanf("%d",&t);
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    cin>>n;
    ll sum=0;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    if(sum%n!=0){
        puts("NO");
        return;
    }
    ll avg=sum/n;
    ll oids=0;
    for(int i=0;i<n;i+=2){
        oids+=a[i]-avg;
    }
    if(oids==0){
        puts("YES");
    }else{
        puts("NO");
    }
}   