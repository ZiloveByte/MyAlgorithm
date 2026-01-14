#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,sum=0,cnt=0,val;
    cin>>n;
    vector<i64> a;
    for(int i=0;i<n;i++){
        cin>>val;
        if(val%2==0) sum+=val;
        else a.push_back(val);
    }
    if(a.size()%2==0){
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
    }else{
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            sum+=a[i];
        }
    }
    cout<<sum<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}