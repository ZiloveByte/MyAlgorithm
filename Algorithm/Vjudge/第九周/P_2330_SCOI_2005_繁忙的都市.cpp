#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct DSU{
	vector<int>fa;
	DSU(int n):fa(n+1){
		iota(fa.begin(),fa.end(),0);
	}
	int get(int x){
		while(x!=fa[x]){
			x=fa[x]=fa[fa[x]];
		}
		return x;
	}
	bool merge(int x,int y){
		x=get(x),y=get(y);
		if(x==y)return false;
		fa[y]=x;
		return true;
	}
	bool same(int x,int y){
		return get(x)==get(y);
	}
};
struct Tree{
	using TII=tuple<int,int,int>;
	int n;
	priority_queue<TII,vector<TII>,greater<TII>>ver;
	Tree(int n){
		this->n=n;
	}
	void add(int x,int y,int w){
		ver.emplace(w,x,y);
	}
	int kruskal(){
		DSU dsu(n);
		int cnt=0,max_edge=0;
		while(ver.size()){
			auto[w,x,y]=ver.top();
			ver.pop();
			if(dsu.same(x,y))continue;
			dsu.merge(x,y);
			max_edge=w;
			cnt++;
		}
		return max_edge;
	}
};

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    Tree tree(n);
    for(int i=0;i<m;i++){
        int u,v,c;
        cin>>u>>v>>c;
        tree.add(u,v,c);
    }
    cout<<n-1<<" "<<tree.kruskal()<<"\n";
}