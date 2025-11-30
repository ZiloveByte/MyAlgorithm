#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=998244353;
ll qpow(ll a,ll b,ll mod=MOD){
	ll res=1;
	a%=mod;
	while(b>0){
		if(b&1)res=(res*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}
ll inv(ll a){
	return qpow(a,MOD-2);
}
ll count_factor_2_in_factorial(ll n){
	ll count=0;
	ll power_of_2=2;
	while(power_of_2<=n){
		count+=n/power_of_2;
		power_of_2*=2;
	}
	return count;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin>>T;
	vector<ll>ns(T);
	for(int i=0;i<T;i++){
		cin>>ns[i];
	}
	vector<ll>results;
	for(ll n:ns){
		ll v2=count_factor_2_in_factorial(n);
		ll denom=v2+1;
		ll inv_denom=inv(denom);
		results.push_back(inv_denom);
	}
	for(size_t i=0;i<results.size();++i){
		cout<<results[i];
		if(i+1<results.size())cout<<" ";
	}
	cout<<"\n";
	return 0;
}