#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    ll n,cnt=0;
    cin>>n;
    vector<ll>a,val(n);
    for(int i=0;i<n;i++) cin>>val[i];
    for(int i=0;i<n;i++){
        if(i==0||val[i]!=val[i-1]) a.push_back(val[i]);
    }
    if(n<3){
        cout<<"0\n";
        return;
    }
    for(int i=2;i<a.size();i++){
        if(a[i-2]<a[i-1]&&a[i-1]>a[i]) cnt++;
    }

    cout<<cnt<<"\n";
}