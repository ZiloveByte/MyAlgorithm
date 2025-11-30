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
    int n;
    cin>>n;
    if(n<5){
        cout<<"-1\n";
        return;
    }
    int m=n+1;
    cout<<m<<'\n';
    cout<<1<<' '<<2<<'\n';
    cout<<2<<' '<<3<<'\n';
    cout<<3<<' '<<1<<'\n';
    cout<<1<<' '<<4<<'\n';
    for(int i=4;i<n;i++) {
        cout<<i<<' '<<(i+1)<<'\n';
    }
    cout<<n<<' '<<1<<'\n';
    return;
}