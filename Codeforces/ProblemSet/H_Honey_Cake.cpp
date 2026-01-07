#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 w,h,d,n;
    cin>>w>>h>>d>>n;
    vector<i64> a;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            a.push_back(i);
            if(i*i!=n) a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end());
    for(i64 i:a){
        if(w%i==0){
            i64 val=n/i;
            for(i64 j:a){
                if(val%j==0&&h%j==0){
                    i64 c=val/j;
                    if(d%c==0){
                        cout<<i-1<<" "<<j-1<<" "<<c-1<<"\n";
                        return;
                    }
                }
            }
        }
    }
    cout<<"-1"<<'\n';
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}