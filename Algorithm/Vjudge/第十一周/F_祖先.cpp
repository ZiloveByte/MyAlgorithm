#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct HLD{
	int n,idx;
	vector<vector<int>>ver;
	vector<int>siz,dep;
	vector<int>top,son,parent;
	HLD(int n){
		this->n=n;
		ver.resize(n+1);
		siz.resize(n+1);
		dep.resize(n+1);
		top.resize(n+1);
		son.resize(n+1);
		parent.resize(n+1);
	}
	void add(int x,int y){
		ver[x].push_back(y);
		ver[y].push_back(x);
	}
	void dfs1(int x){
		siz[x]=1;
		dep[x]=dep[parent[x]]+1;
		for(auto y:ver[x]){
			if(y==parent[x])continue;
			parent[y]=x;
			dfs1(y);
			siz[x]+=siz[y];
			if(siz[y]>siz[son[x]]){
				son[x]=y;
			}
		}
	}
	void dfs2(int x,int up){
		top[x]=up;
		if(son[x])dfs2(son[x],up);
		for(auto y:ver[x]){
			if(y==parent[x]||y==son[x])continue;
			dfs2(y,y);
		}
	}
	int lca(int x,int y){
		while(top[x]!=top[y]){
			if(dep[top[x]]>dep[top[y]]){
				x=parent[top[x]];
			}else{
				y=parent[top[y]];
			}
		}
		return dep[x]<dep[y]?x:y;
	}
	int clac(int x,int y){
		return dep[x]+dep[y]-2*dep[lca(x,y)];
	}
	void work(int root=1){
		dfs1(root);
		dfs2(root,root);
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
    int n,m,s;
    cin>>n>>m>>s;
    HLD hld(n);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        hld.add(x,y);
    }
    hld.work(s);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        cout<<hld.lca(a,b)<<'\n';
    }
}