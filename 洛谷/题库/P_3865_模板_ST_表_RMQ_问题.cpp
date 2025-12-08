#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> f(100005,vector<int>(20));
    for(int i=0;i<n;i++){
        f[i][0]=a[i];
    }
    for(int j=1;(1<<j)<=n;j++){
        for(int i=0;i<=n-(1<<j);i++){
            f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
        }
    }
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int j=__lg(r-l+1);
        cout<<max(f[l][j],f[r-(1<<j)+1][j])<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}