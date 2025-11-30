#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll base=a[0];
        ll D=0;
        for(int i=1;i<n;i++){
            ll diff = a[i]-base;
            if(diff<0) diff = -diff;
            D = gcd(D, diff);
        }
        if(D==0){
            cout<<"infinite\n";
        }else{
            ll g = gcd(base<0? -base: base, D);
            cout<<D<<" "<<(D/g)<<"\n";
        }
    }
    return 0;
}