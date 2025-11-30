#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll catalan(unsigned int n){
    ll c=1;
    for(int i=1;i<=n;++i){
        c=c*(4*i-2)/(i+1);
    }
    return (ll)c;
}

int main(){
    int n;
    cin>>n;
    cout<<catalan(n)<<"\n";
    return 0;
}