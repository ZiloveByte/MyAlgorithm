#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    bool odd=false,even=false;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2) odd=true;
        else even=true;
    }
    if(odd&&even) sort(a.begin()+1,a.end());
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
}