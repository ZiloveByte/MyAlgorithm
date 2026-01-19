#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 a,b;
    cin>>a>>b;
    if(a%2==0&&b%2==0){
        cout<<a*b/2+2<<"\n";
        return;
    }else if(a%2&&b%2){
        cout<<a*b+1<<"\n";
        return;
    }else if(a%2&&b%2==0){
        if(b%4==2){
            cout<<"-1\n";
            return;
        }
        cout<<a*b/2+2<<"\n";
        return;
    }else if(a%2==0&&b%2){
        cout<<"-1\n";
        return;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}