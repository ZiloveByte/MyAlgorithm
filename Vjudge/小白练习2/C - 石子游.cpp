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
    int cnt_alice=0,cnt_bob=0;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>=1;i-=2){
        cnt_alice+=a[i];
    }
    for(int i=n-1;i>=1;i-=2){
        cnt_bob+=a[i];
    }
    if(cnt_alice>cnt_bob)cout<<"Alice\n";
    else cout<<"Bob\n";
}