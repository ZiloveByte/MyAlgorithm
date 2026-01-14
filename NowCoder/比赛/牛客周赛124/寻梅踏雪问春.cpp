#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    i64 val1=(a-c)*(a-c)+(b-d)*(b-d);
    i64 val2=(c-e)*(c-e)+(d-f)*(d-f);
    i64 val3=(a-e)*(a-e)+(b-f)*(b-f);
    if(val1==val2&&val2==val3){
        cout<<"YES\n";
    }else cout<<"NO\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}