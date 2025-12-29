#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 m,cnt=0,n;
    cin>>m;
    vector<i64> a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    cin>>n;
    for(int i=0;i<m-2;i++){
        if(a[i]==0&&a[i+1]==0&&a[i+2]==0) cnt++,i++;
    }
    if(cnt<n) cout<<"false\n";
    else cout<<"true\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}