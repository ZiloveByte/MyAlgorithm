#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;

void Nuyoah() {
	int n,m;
	cin>>n>>m;
	
	vector<vector<int>> g(n+1);
	vector<int> indeg(n+1);
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		indeg[b]++;
	}

	queue<int> q;
	vector<int> dp(n+1);
	for(int i=1;i<=n;i++)
		if(indeg[i]==0)dp[i]=1,q.emplace(i);

	int ans=0;
	while(!q.empty()){
		int u=q.front();q.pop();
		if(g[u].empty()){
			ans+=dp[u];
			if(ans>=MOD) ans-=MOD;
		}
		for (int v:g[u]){
			dp[v]+=dp[u];
			if(dp[v]>=MOD) dp[v]-=MOD;
			if((indeg[v]-=1)==0) q.emplace(v);
		}
	}
	cout<<ans<<'\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Nuyoah();
	return 0;
}