#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,a,b,c;
    cin>>n>>a>>b>>c;
    i64 pb=(a%2+b%2+c%2)/2;
    if(a%2!=pb){
        cout<<1<<"\n";
        return;
    }else if(b%2!=pb){
        cout<<2<<"\n";
        return;
    }else if(c%2!=pb){
        cout<<3<<"\n";
        return;
    }
    for(int i=4;i<=n;i++){
        i64 val;
        cin>>val;
        if(val%2!=pb) {
            cout<<i<<"\n";
            return;
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}