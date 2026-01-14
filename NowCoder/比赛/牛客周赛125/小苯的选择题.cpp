#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    string ans;
    i64 cnt=0;
    cin>>ans;
    for(auto val:ans){
        if(val=='A') cnt++;
        else if(val=='B') cnt++;
        else if(val=='D') cnt++;
        else{
            cout<<"0\n";
            return;
        }
    }
    if(cnt==3){
        cout<<"4\n";
        return;
    }else{
        cout<<"2\n";
        return;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}