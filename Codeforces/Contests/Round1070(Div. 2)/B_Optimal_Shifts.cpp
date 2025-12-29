#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.find('0')==string::npos){
        cout<<0<<"\n";
        return;
    }
    string ss=s+s;
    int best=0,cur=0;
    for(int i=0;i<ss.size();i++){
        if(ss[i]=='0'){
            cur++;
            if(cur>n) cur=n;
        }else{
            best=max(best,cur);
            cur=0;
        }
    }
    best=max(best,cur);
    if(best>n) best=n;
    cout<<best<<"\n";
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