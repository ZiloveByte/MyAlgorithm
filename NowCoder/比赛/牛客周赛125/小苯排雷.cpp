#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n;
    cin>>n;
    vector<i64> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    i64 sum=0,minn=LLONG_MAX;
    bool check=false;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(check){
                sum+=minn;
                check=false;
                minn=LLONG_MAX;
            }
        }else{
            check=true;
            if(a[i]<minn) minn=a[i];
        }
    }
    if(check) sum+=minn;
    cout<<sum<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}