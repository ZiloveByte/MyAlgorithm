#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    int n,k;
    cin>>n>>k;
    if(k%2==1){
        cout<<"-1\n";
        return;
    }
    int t=k/2;
    vector<vector<ll>> a(n,vector<ll>(n));
    for (int i=0;i<t;i++) a[i][i]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    return;
}