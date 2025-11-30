#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,cnt=0;
    cin>>n;
    vector<ll> p(n),vit(n);
    for(int i=0;i<n;i++) cin>>p[i],vit[i]=i+1;
    set<ll> to_remove(p.begin(), p.end());
    vit.erase(remove_if(vit.begin(), vit.end(), [&to_remove](ll x) {return to_remove.count(x);}), vit.end());
    for(auto &val:p){
        if(val==0) val=vit.back(),vit.pop_back();
    }
    int minn=1e9,maxn=0;
    for(int i=0;i<n;i++){
        if(p[i]!=i+1){
            minn=min(i,minn);
            maxn=max(i,maxn);
        }
    } 
    cout<<max(maxn-minn+1,0)<<"\n";
}