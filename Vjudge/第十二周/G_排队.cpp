#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 pl(int n,int m){
    if(m<0||m>n) return 0;
    if(m==0) return 1;

    i64 res=1;
    for(int i=0;i<m;i++){
        res*=(n-i);
    }
    return res;
}
 
void solve() {
    int n,m;
    cin>>n>>m;
    i64 sum=0;
    sum=sum+(pl(n,n)*pl(n+1,2)*pl(n+3,m))+(2*pl(n,n)*(n+1)*m*pl(n+2,m-1));
    cout<<sum<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}