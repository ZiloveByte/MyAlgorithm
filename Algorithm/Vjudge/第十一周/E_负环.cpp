#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

const int N=1e5+7,M=1e6+7;
int n,m;
int ver[M],ne[M],h[N],edge[M],tot,cnt[N];
int d[N],v[N];
void add(int x,int y,int w){
	ver[++tot]=y,ne[tot]=h[x],h[x]=tot;
	edge[tot]=w;
}
bool spfa(){
	memset(d, 0x3f, sizeof d);
    memset(cnt, 0, sizeof cnt);
	d[1]=0;
	queue<int>q;
	q.push(1);
	v[1]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		v[x]=0;
		for(int i=h[x];i;i=ne[i]){
			int y=ver[i];
			if(d[y]>d[x]+edge[i]){
				d[y]=d[x]+edge[i];
                cnt[y]=cnt[x]+1;
                if(cnt[y]>=n) return true;
				if(!v[y]){
					q.push(y);
					v[y]=1;
				}
			}
		}
	}
    return false;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    cin>>n>>m;
    tot=0;
    memset(h, 0, sizeof h);
    memset(v, 0, sizeof v);
	for(int i=1;i<=m;++i){
		int x,y,w;
		cin>>x>>y>>w;
		if(w>=0){
            add(x,y,w);
            add(y,x,w);
        }else{
            add(x,y,w);
        }
	}
    cout<<(spfa()?"YES\n":"NO\n");
	return;
}