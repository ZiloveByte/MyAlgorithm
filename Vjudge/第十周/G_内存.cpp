#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct node{
    int v,t,idx;
    bool operator<(const node& a)const{
		if(v!=a.v) return v>a.v;
		return t>a.t;
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
    int n,m,ans=0;
    cin>>n>>m;
    map<int,int> mp;
    priority_queue<node> pq;
    for(int i=1;i<=m;i++){
        int val;
        cin>>val;
        if(mp[val]){
            ans++;
            mp[val]++;
        }else if(pq.size()==n){
            node a=pq.top();
            pq.pop();
            while(mp[a.idx]!=a.v){
                a.v=mp[a.idx];
                pq.push(a);
                a=pq.top();
                pq.pop();
            }
            mp[a.idx]=0;
            mp[val]=1;
            pq.push(node{1,i,val});
        }else{
            pq.push(node{1,i,val});
            mp[val]=1;
        }
    }
    cout<<ans<<"\n";
}