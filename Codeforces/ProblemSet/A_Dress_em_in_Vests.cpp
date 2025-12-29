#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

struct node{
    i64 x,y;
}ans[100005];

void solve() {
    i64 n,m,x,y,cnt=0;
    cin>>n>>m>>x>>y;
    vector<i64> a(100005),b(100005);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    i64 pa=1,pb=1;
    while(pa<=n&&pb<=m){
        while(b[pb]<a[pa]-x) pb++;
        if(pa<=n&&pb<=m&&b[pb]>=a[pa]-x&&b[pb]<=a[pa]+y){
            ans[++cnt].x=pa;
            ans[cnt].y=pb;
            pb++;
        }
        pa++;
    }
    cout<<cnt<<"\n";
    for(int i=1;i<=cnt;i++) cout<<ans[i].x<<" "<<ans[i].y<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}