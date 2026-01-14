#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    cin>>n;
    int x=n/8;
    for(int i=x;i>=0;i--){
        for(int j=0;j<=n;j++){
            if(i*8+j*6==n){
                cout<<i+j<<"\n";
                return;
            }else continue;
            if(i*8+j*6>n){
                continue;
            }
        }
    }
    cout<<"-1\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}