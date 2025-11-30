#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Nuyoah(){
    int n;
    cin >> n;
    vector<ll> b(n);
    for(int i=0;i<n;i++)cin>>b[i];

    ll mn=b[0];
    bool ok=true;
    for(int i=1;i<n;i++){
        if(b[i]>2*mn-1){
            ok=false;
            break;
        }
        if(b[i]<mn) mn=b[i];
    }

    cout<<(ok?"YES":"NO")<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}