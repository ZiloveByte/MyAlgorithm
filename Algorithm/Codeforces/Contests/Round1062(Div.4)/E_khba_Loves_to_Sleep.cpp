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
    int n,k;
    ll x;
    cin>>n>>k>>x;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a.begin()+1,a.begin()+n+1);

    auto buildMerged = [&](ll D)->vector<pair<ll,ll>>{
        vector<pair<ll,ll>> seg;
        seg.reserve(n);
        for(int i=1;i<=n;i++){
            ll L=a[i]-D+1, R=a[i]+D-1;
            L=max(0LL,L), R=min(x,R);
            if(L<=R) seg.push_back({L,R});
        }
        if(seg.empty()) return seg;
        sort(seg.begin(),seg.end());
        vector<pair<ll,ll>> m;
        m.push_back(seg[0]);
        for(size_t i=1;i<seg.size();i++){
            if(seg[i].first<=m.back().second+1){
                m.back().second=max(m.back().second,seg[i].second);
            }else m.push_back(seg[i]);
        }
        return m;
    };

    auto can = [&](ll D)->bool{
        auto m = buildMerged(D);
        ll covered=0;
        for(auto &p:m) covered += (p.second - p.first + 1);
        ll avail = (x+1) - covered;
        return avail >= k;
    };

    ll L=0, R=x+2;
    while(L+1<R){
        ll mid=(L+R)>>1;
        if(can(mid)) L=mid;
        else R=mid;
    }
    ll D=L;

    auto m = buildMerged(D);
    vector<ll> ans;
    ans.reserve(k);
    ll prev=-1;
    for(auto &p:m){
        ll s=prev+1, e=p.first-1;
        if(s<=e){
            ll take=min<ll>(k-ans.size(), e-s+1);
            for(ll i=0;i<take;i++) ans.push_back(s+i);
            if((int)ans.size()==k) break;
        }
        prev=p.second;
    }
    if((int)ans.size()<k){
        ll s=prev+1, e=x;
        if(s<=e){
            ll take=min<ll>(k-ans.size(),e-s+1);
            for(ll i=0;i<take;i++) ans.push_back(s+i);
        }
    }

    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}