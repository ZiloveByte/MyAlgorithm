#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 m;
    cin>>m;
    vector<i64> arr(11);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
    }
    for(int i=1;i<=5;i++){
        if(arr[i]!=2){
            cout<<"WIN\n";
            return;
        }
    }
    cout<<"FAIL\n";
    
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}