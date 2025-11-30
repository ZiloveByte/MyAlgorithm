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
    int t,n;
    cin>>t>>n;
    while(t--){
        int val,cnt_0=0,cnt_1=0;
        for(int i=0;i<n;i++){
            cin>>val;
            if(val) cnt_1++;
            else cnt_0++;
        }
        cout<<abs(cnt_0-cnt_1)<<"\n";
    }
}