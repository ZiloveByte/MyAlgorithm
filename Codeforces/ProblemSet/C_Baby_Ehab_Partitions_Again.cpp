#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,sum=0;
    cin>>n;
    vector<i64> a(n);
    for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
    vector<bool> f(sum+1,false);
    if(sum&1){
        cout<<"0\n";
        return;
    }
    sum/=2;
    f[0]=1;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=a[i];j--){
            if(f[j-a[i]]) f[j]=true;
        }
    }
    if(!f[sum]){
        cout<<"0\n";
        return;
    }
    i64 minc=LLONG_MAX,minp=-1;
    for(int i=0;i<n;i++){
        i64 x=a[i],cnt=0;
        while((x&1)==0){
            x>>=1;
            cnt++;
        }
        if(cnt<minc) minc=cnt,minp=i;
    }
    cout<<"1\n"<<minp+1<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}