#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,res=0;
    cin>>n;
    vector<i64> b(n);
    map<i64,vector<i64>> pos;
    for(int i=0;i<n;i++){
        cin>>b[i];
        pos[b[i]].push_back(i);
    }
    vector<i64> a(n);
    i64 num=1;
    for(auto [val,index]:pos){
        i64 k=val;
        if(index.size()%k!=0){
            cout<<"-1\n";
            return;
        }
        for(int i=0;i<index.size();i++){
            a[index[i]]=num;
            if((i+1)%k==0){
                num++;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}