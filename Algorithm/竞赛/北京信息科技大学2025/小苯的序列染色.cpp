#include<bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;
constexpr int MAXN=1e9+7;

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
	ll n;
	cin>>n;
	vector<ll> a(n+1);
	for(ll i=1;i<=n;i++) cin>>a[i];
	vector<pair<ll,ll>> segs;
	segs.reserve(3*n);
	for(ll i=1;i<=n;i++){
		ll v=a[i];
		ll r=i+v-1;
		if(r<=n && a[r]<=v) segs.emplace_back(i,r);
		ll l=i-v+1;
		if(l>=1 && a[l]<=v) segs.emplace_back(l,i);
		if(v==1) segs.emplace_back(i,i);
	}
	sort(segs.begin(),segs.end());
	ll cur=1,idx=0,m=(ll)segs.size(),ans=0;
	while(cur<=n){
		ll best=-1;
		while(idx<m && segs[idx].first<=cur){
			best=max(best, segs[idx].second);
			idx++;
		}
		if(best<cur){
			cout<<-1<<"\n";
			return;
		}
		ans++;
		cur=best+1;
	}
	cout<<ans<<"\n";
}