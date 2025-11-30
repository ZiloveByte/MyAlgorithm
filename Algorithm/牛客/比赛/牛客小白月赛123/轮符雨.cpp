#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
using ll = long long;

int addmod(int a,int b){a+=b;if(a>=MOD)a-=MOD;return a;}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;
	cin>>T;
	vector<pair<int,int>>qs(T);
	int maxN=0,maxT=0;
	for(int i=0;i<T;++i){
		int n,t;
		cin>>n>>t;
		qs[i]={n,t};
		maxN=max(maxN,n);
		maxT=max(maxT,t);
	}
	int maxPossibleT=maxN*(maxN-1)/2;
	maxT=min(maxT,maxPossibleT);
	vector<int>c2(maxN+1);
	for(int i=0;i<=maxN;++i)c2[i]=i*(i-1)/2;
	vector<vector<int>>dp(maxN+1,vector<int>(maxT+1,0));
	dp[0][0]=1;
	for(int i=1;i<=maxN;++i){
		for(int j=0;j<=maxT;++j){
			ll val=0;
			for(int len=1;len<=i;++len){
				int v=c2[len];
				if(v>j)break;
				val+=dp[i-len][j-v];
				if(val>=(1ll<<60))val%=MOD;
			}
			dp[i][j]=(int)(val%MOD);
		}
	}
	for(int i=0;i<T;++i){
		int n=qs[i].first,t=qs[i].second;
		int limit=n*(n-1)/2;
		if(t>limit){
			cout<<0<<'\n';
		}else{
			if(t>maxT)cout<<0<<'\n';
			else{
				ll ans=dp[n][t];
				ans=(ans*2)%MOD;
				cout<<ans<<'\n';
			}
		}
	}
	return 0;
}