#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ull=unsigned long long;
ll m;

template<class T>struct Segt_{
	struct node{
		int l,r;
		T w,add,mul=1;
	};
	vector<T>w;
	vector<node>t;
	Segt_(int n){
		w.resize(n+1);
		t.resize((n<<2)+1);
		build(1,n);
	}
	Segt_(vector<T> in){
		int n=in.size()-1;
		w.resize(n+1);
		for(int i=1;i<=n;i++){
			w[i]=in[i];
		}
		t.resize((n<<2)+1);
		build(1,n);
	}
	void pushdown(node&p,T add,T mul){
		p.w=(p.w*mul%m+(p.r-p.l+1)*add%m)%m;
		p.add=p.add*mul%m+add%m;
		p.mul=p.mul*mul%m;
	}
	void pushup(node&p,node&l,node&r){
		p.w=l.w+r.w;
	}
#define GL (k<<1)
#define GR (k<<1|1)
	void pushdown(int k){
		pushdown(t[GL],t[k].add,t[k].mul);
		pushdown(t[GR],t[k].add,t[k].mul);
		t[k].add=0,t[k].mul=1;
	}
	void pushup(int k){
		pushup(t[k],t[GL],t[GR]);
	}
	void build(int l,int r,int k=1){
		if(l==r){
			t[k]={l,r,w[l]};
			return;
		}
		t[k]={l,r};
		int mid=(l+r)/2;
		build(l,mid,GL);
		build(mid+1,r,GR);
		pushup(k);
	}
	void modify(int l,int r,T val,int k=1){
		if(l<=t[k].l&&t[k].r<=r){
			t[k].w=(t[k].w+(t[k].r-t[k].l+1)*val)%m;
			t[k].add=(t[k].add+val)%m;
			return;
		}
		pushdown(k);
		int mid=(t[k].l+t[k].r)/2;
		if(l<=mid)modify(l,r,val,GL);
		if(mid<r)modify(l,r,val,GR);
		pushup(k);
	}
	void modify2(int l,int r,T val,int k=1){
		if(l<=t[k].l&&t[k].r<=r){
			t[k].w=t[k].w*val%m;
			t[k].add=t[k].add*val%m;
			t[k].mul=t[k].mul*val%m;
			return;
		}
		pushdown(k);
		int mid=(t[k].l+t[k].r)/2;
		if(l<=mid)modify2(l,r,val,GL);
		if(mid<r)modify2(l,r,val,GR);
		pushup(k);
	}
	T ask(int l,int r,int k=1){
		if(l<=t[k].l&&t[k].r<=r){
			return t[k].w;
		}
		pushdown(k);
		int mid=(t[k].l+t[k].r)/2;
		T ans=0;
		if(l<=mid)ans=(ans+ask(l,r,GL))%m;
		if(mid<r)ans=(ans+ask(l,r,GR))%m;
		return ans;
	}
	void debug(int k=1){
		cout<<"["<<t[k].l<<", "<<t[k].r<<"]: ";
		cout<<"w = "<<t[k].w<<", ";
		cout<<"add = "<<t[k].add<<", ";
		cout<<"mul = "<<t[k].mul<<", ";
		cout<<endl;
		if(t[k].l==t[k].r)return;
		debug(GL),debug(GR);
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
    int n,q;
    cin>>n>>q>>m;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    Segt_<ll> seg(a);
    int val,x,y,k;
    while(q--){
        cin>>val;
        if(val==1){
            cin>>x>>y>>k;
            seg.modify2(x,y,k);
        }else if(val==2){
            cin>>x>>y>>k;
            seg.modify(x,y,k);
        }else if(val==3){
            cin>>x>>y;
            ll res=seg.ask(x,y);
            res=(res%m+m)%m;
            cout<<res<<'\n';
        }
    }
    return;
}