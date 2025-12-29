#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    if(n==2){
        cout<<"9"<<"\n";
        return;
    }
    if(n==3){
        cout<<"29\n";
        return;
    }
    if(n==4){
        cout<<"56\n";
        return;
    }
    cout<<n*n+3*n*(n-1)-3+n*(n-2)-2<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}