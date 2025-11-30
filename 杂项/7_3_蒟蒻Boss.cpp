#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=1e9+7;

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
    int n;
    cin>>n;
    if(n==1){
        cout<<2;
        return;
    }
    int a=1,b=2,c;
    for(int i=1;i<n;i++){
        c=a+b;
        c%=MOD;
        a=b;
        b=c;
    }
    cout<<c<<'\n';
}
