#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int l,r,x;
    cin>>l>>r>>x;
    for(int i=l;i<=r;i++)if(i%x==0){
        cout<<i<<"\n";
        return;
    }
    cout<<"-1\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}