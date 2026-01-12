#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,q;
    cin>>n;
    vector<i64> a(2e5+10);
    map<i64,i64> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        i64 x,y;
        cin>>x>>y;
        i64 num=x*x-4*y;
        if(num<0){
            cout<<"0 ";
            continue;
        }
        i64 sq=sqrt(num);
        if(sq*sq!=num){
            cout<<"0 ";
            continue;
        }
        if(num==0){
            cout<<mp[(x-sq)/2]*(mp[(x-sq)/2]-1)/2<<" ";
            continue;
        }
        i64 n1=x-sq;
        i64 n2=x+sq;
        i64 ans=0;
        cout<<mp[n1/2]*mp[n2/2]<<" ";
    }
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}