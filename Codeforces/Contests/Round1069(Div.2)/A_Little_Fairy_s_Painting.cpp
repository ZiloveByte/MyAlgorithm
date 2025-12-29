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
    set<i64> a;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.insert(val);
    }
    i64 lens=a.size();
    while (a.find(lens)==a.end()) {
        a.insert(lens);
        lens++;
    }
    cout<<lens<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}