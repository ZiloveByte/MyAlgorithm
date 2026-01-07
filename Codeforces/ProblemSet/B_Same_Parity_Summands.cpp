#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,k;
    cin>>n>>k;
    if(n<k){
        cout<<"NO\n";
        return;
    }else if(n==k){
        cout<<"YES\n";
        while(k--) cout<<"1 ";
        cout<<"\n";
        return;
    }
    if((n-k+1)%2==1&&(n-k+1)>0){
        cout<<"YES\n";
        for(int i=1;i<k;i++) cout<<"1 ";
        cout<<n-k+1<<"\n";
        return;
    }else if((n-2*k+2)%2==0&&(n-2*k+2)>0){
        cout<<"YES\n";
        for(int i=1;i<k;i++) cout<<"2 ";
        cout<<n-2*k+2<<"\n";
        return;
    }else{
        cout<<"NO\n";
        return;
    }

}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}