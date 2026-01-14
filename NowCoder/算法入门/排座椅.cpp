#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

struct node{
    i64 id;
    i64 cnt;
};

bool cmp1(node a,node b){
    return a.cnt>b.cnt;
}

bool cmp2(node a,node b){
    return a.id<b.id;
}
 
void solve() {
    i64 n,m,k,l,d;
    cin>>n>>m>>k>>l>>d;
    vector<node> heng(n+1),shu(m+1);
    for(int i=1;i<=n;i++) heng[i]={i,0};
    for(int i=1;i<=m;i++) shu[i]={i,0};
    for(int i=1;i<=d;i++){
        int x,y,p,q;
        cin>>x>>y>>p>>q;
        if(x==p) shu[min(y,q)].cnt++;
        else heng[min(x,p)].cnt++;
    }
    sort(heng.begin()+1,heng.begin()+1+n,cmp1);
    sort(shu.begin()+1,shu.begin()+1+m,cmp1);
    sort(heng.begin()+1,heng.begin()+1+k,cmp2);
    sort(shu.begin()+1,shu.begin()+1+l,cmp2);
    
    for(int i=1;i<=k;i++) cout<<heng[i].id<<" ";
    cout<<"\n";
    for(int i=1;i<=l;i++) cout<<shu[i].id<<" ";
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}