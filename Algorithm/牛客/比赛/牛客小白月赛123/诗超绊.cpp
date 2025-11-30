#include<bits/stdc++.h>
using namespace std;

using ll=long long;

bool check_d0(const vector<ll>&a){
	for(int i=1;i<a.size();i++){
		if(a[i]<=a[i-1])return false;
	}
	return true;
}
bool check(vector<ll>a,ll d,ll m){
	if(d==0)return check_d0(a);
	int n=a.size();
	vector<ll>add(n+1,0);
	ll used=0;
	for(int i=1;i<n;i++){
		add[i]+=add[i-1];
		ll actual_prev=a[i-1]+add[i]*d;
		ll actual_curr=a[i]+add[i]*d;
		if(actual_curr<=actual_prev){
			ll need=actual_prev+1-actual_curr;
			ll ops_needed=(need+d-1)/d;
			used+=ops_needed;
			if(used>m)return false;
			add[i+1]-=ops_needed;
		}
	}
	return used<=m;
}
void Nuyoah(){
	ll n,m;
	cin>>n>>m;
	vector<ll>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	if(!check_d0(a)&&m==0){
		cout<<"-1\n";
		return;
	}
	if(check_d0(a)){
		cout<<"0\n";
		return;
	}
	ll l=1,r=1e18,ans=-1;
	while(l<=r){
		ll mid=l+(r-l)/2;
		if(check(a,mid,m)){
			ans=mid;
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	cout<<ans<<"\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) Nuyoah();
	return 0;
}