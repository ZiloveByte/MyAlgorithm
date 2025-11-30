#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
	int n;
	cin>>n;
	int r=n%3;
	cout<<(r?3-r:0)<<'\n';
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) Nuyoah();
	return 0;
}