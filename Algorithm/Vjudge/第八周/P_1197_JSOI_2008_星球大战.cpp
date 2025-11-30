#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

// 并查集
struct DSU {
    vector<ll> fa, sz;
    DSU() {}
    DSU(ll n) { init(n); }
    void init(ll n) {
        fa.resize(n);
        sz.assign(n, 1);
        iota(fa.begin(), fa.end(), 0);
    }
    ll find(ll x) {
        while (fa[x] != x) {
            fa[x] = fa[fa[x]];
            x = fa[x];
        }
        return x;
    }
    bool unite(ll a, ll b) {
        a = find(a), b = find(b);
        if (a == b) return false;
        if (sz[a] < sz[b]) swap(a, b);
        fa[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

void Nuyoah();
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
	ll n,m;
	cin>>n>>m;
	vector<vector<ll>>g(n);
	g.reserve(n);
	for(ll i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	ll k;
	cin>>k;
	vector<ll> del(k);
	vector<char> dead(n,false);
	for(ll i=0;i<k;i++){
		cin>>del[i];
		dead[del[i]]=true;
	}
	DSU dsu(n);
	ll comp=0;
	for(ll v=0;v<n;v++){
		if(!dead[v]) comp++;
	}
	for(ll v=0;v<n;v++){
		if(dead[v]) continue;
		for(ll u:g[v]){
			if(dead[u]) continue;
			if(dsu.unite(v,u)){
				comp--;
			}
		}
	}
	vector<ll> ans(k+1);
	ans[k]=comp;
	for(ll i=k-1;i>=0;i--){
		ll v=del[i];
		dead[v]=false;
		comp++;
		for(ll u:g[v]){
			if(!dead[u]){
				if(dsu.unite(v,u)){
					comp--;
				}
			}
		}
		ans[i]=comp;
	}
	for(ll i=0;i<=k;i++) cout<<ans[i]<<"\n";
	return;
}