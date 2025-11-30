#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

struct node{
    ll N,S,W;
};


void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    ll n=0,ans=0,p=1;
	cin>>n;
    vector<node> a(n+1);
	for(ll i=1;i<=n;i++) cin>>a[i].S;
	for(ll i=1;i<=n;i++) a[i].N=i+1;
	a[n].N=1;
	for(ll i=1;i<=2*n;i++){
		if(a[p].S>1){
			a[a[p].N].S+=a[p].S-1;
			a[a[p].N].W+=a[p].S-1;
			a[p].S=1;
		}
		p=a[p].N;
	}
    for(ll i=1;i<=n;i++) ans+=(a[i].W*a[i].W);
    cout<<ans<<"\n";
}