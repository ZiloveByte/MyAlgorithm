#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void Nuyoah(){
    int n,k,L,R;
    cin>>n>>k>>L>>R;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    auto atMost=[&](int K,int M)->ll{
        if(K<=0||M<=0) return 0LL;
        unordered_map<ll,int> cnt;
        ll ans=0;
        int diff=0,l=0;
        for(int r=0;r<n;r++){
            if(++cnt[a[r]]==1) diff++;
            while(diff>K||r-l+1>M){
                if((cnt[a[l]]-=1)==0){
                    cnt.erase(a[l]);
                    diff--;
                }
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    };

    ll res=atMost(k,R)-atMost(k,L-1)-atMost(k-1,R)+atMost(k-1,L-1);
    cout<<res<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}