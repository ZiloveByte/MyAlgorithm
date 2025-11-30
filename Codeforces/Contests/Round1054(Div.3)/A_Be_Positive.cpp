#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n,res=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val==0) res++;
        if(val==-1) cnt++;
    }
    if(cnt%2) res+=2;
    cout<<res<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}