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
    int n,mark=1,index=0;
    cin>>n;
    vector<vector<ll>> a(n,vector<ll>(n));
    while(index<n){
        for(int i=index;i<n;i++){
            a[index][i]=mark;
            a[i][index]=mark;
            mark++;
        }
        index++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}