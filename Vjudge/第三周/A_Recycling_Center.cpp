#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
	int n,c;
	cin>>n>>c;
	vector<ll> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	multiset<ll> s;
    for(ll x:a) s.insert(x);
	ll yz=c;
	int cnt=0;
	while(!s.empty()){
		auto it=s.upper_bound(yz);
		if(it==s.begin()) break;
		it--;
		cnt++;
		yz/=2;
		s.erase(it);
	}
	cout<<n-cnt<<"\n";
}
    
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) Nuyoah();
	return 0;
}