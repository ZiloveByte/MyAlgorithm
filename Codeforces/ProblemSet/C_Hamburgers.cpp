#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 nb,ns,nc,pb,ps,pc,m,b=0,s=0,c=0,ans=0;
bool check(i64 mid){
    i64 n=0;
    if(mid*b>nb) n+=(mid*b-nb)*pb;
    if(mid*s>ns) n+=(mid*s-ns)*ps;
    if(mid*c>nc) n+=(mid*c-nc)*pc;
    return n<=m;
}
 
void solve() {
    string str;
    cin>>str;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>m;
    i64 lens=str.length();
    for(int i=0;i<lens;i++){
        if(str[i]=='B') b++;
        else if(str[i]=='S') s++;
        else if(str[i]=='C') c++;
    }
    i64 l=0,r=m+max(nb,max(nc,ns));
    while(l<=r){
        i64 mid=(l+r)>>1;
        if(check(mid)){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<r<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}