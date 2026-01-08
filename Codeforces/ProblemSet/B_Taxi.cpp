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
    vector<i64> a(5,0);
    for(int i=1;i<=n;i++){
        i64 val;
        cin>>val;
        a[val]++;
    }
    i64 res=min(a[3],a[1]);
    a[4]+=res;
    a[3]-=res;
    a[1]-=res;
    cout<<a[4]+a[3]+(a[2]*2+a[1]*1+4-1)/4<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}