#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,maxn=0;
    cin>>n;
    vector<i64> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxn) maxn=a[i];
    }
    if(maxn==1){
        if(n&1){
            cout<<"Alice\n";
            return;
        }else{
            cout<<"Bob\n";
            return;
        }
    }
    int one=count(a.begin(),a.end(),1);
    if(one&1){
        cout<<"Bob\n";
        return;
    }else{
        cout<<"Alice\n";
        return;
    }
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