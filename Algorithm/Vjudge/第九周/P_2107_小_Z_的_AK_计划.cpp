#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct node{
    ll x=0,t=0;
};

bool cmp(node a,node b){
    return a.x<b.x;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    ll n,m;
    cin>>n>>m;
    vector<node> a(n+1);
    priority_queue<ll> que;
    for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].t;
    sort(a.begin()+1,a.begin()+1+n,cmp);
    ll time=0,cnt=0,res=0;
    for(int i=1;i<=n;i++){
        time+=a[i].x-a[i-1].x;
        que.push(a[i].t);
        cnt++;
        time+=a[i].t;
        while(time>m&&!que.empty()){
            cnt--;
            time-=que.top();
            que.pop();
        }
        if(time>m) break;
        else res=max(res,cnt);
    }
    cout<<res<<"\n";
}