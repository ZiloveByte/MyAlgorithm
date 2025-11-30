#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll = long long;
using ull = unsigned long long;

void Nuyoah(){
	int n,d,l;
	cin>>n>>d>>l;

	int p=(n+1)/2,q=n/2;
	int mn=p*1-q*l,mx=p*l-q*1;
	if(d<mn||d>mx){
		cout<<-1<<"\n";
		return;
	}

	vector<int> a(n);
	for(int i=0;i<n;i++){
		if((i&1)==0) a[i]=1;
		else a[i]=l;
	}

	int need=d-mn;
	for(int i=0;i<n&&need>0;i++){
		int can=l-1;
		int t=min(can,need);
		if((i&1)==0) a[i]+=t;
		else a[i]-=t;
		need-=t;
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Nuyoah();
	return 0;
}