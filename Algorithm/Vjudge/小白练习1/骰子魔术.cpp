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
    int n,x,val;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val==x){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}