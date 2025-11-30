#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int x) {
    if (x<0) return false;
    int o=sqrt(x);
    if (o*o!=x){
        return false;
    }
    int sum=0;
    int val=x;
    if(val==0) sum=0;
    else{
        while(val>0){
            sum+=val%10;
            val/=10;
        }
    }
    int p=sqrt(sum);
    return (p*p==sum);
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1){
        if(check(a[0]))cout<<"1\n";
        else cout<<"0\n";
    }else {
        cout<<n<<"\n";
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
    return 0;
}