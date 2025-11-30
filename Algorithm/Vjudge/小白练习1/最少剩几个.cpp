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
    int n,cnt_odd=0,cnt_even=0,lens;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2) cnt_odd++;
        else cnt_even++;
    }
    if(n==1){
        cout<<"1\n";
        return;
    }
    if(cnt_odd==cnt_even) lens=0;
    else if(cnt_odd>cnt_even){
        int diff=cnt_odd-cnt_even;
        lens=diff%2;
    }else if(cnt_odd<cnt_even){
        int diff=cnt_even-cnt_odd;
        lens=diff;
    }
    cout<<lens<<"\n";
}