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
    vector<ll> x(n);
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val==1)cout<<"Kato_Shoko\n";
        else if(val==2) cout<<"Kato_Shoko\n";
        else if(val==3) cout<<"koishiYun\n";
        else if(val==4) cout<<"Kato_Shoko\n";
        else if(val==5) cout<<"Kato_Shoko\n";
        else if(val==6) cout<<"koishiYun\n";
    }
}