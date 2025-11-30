#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;

struct node{
    int now,id;
};

bool cmp(node x,node y){
    if(x.now!=y.now) return x.now<y.now;
    return x.id<y.id;
}
    
void Nuyoah(){
    int m;
    cin>>m;
    vector<int>a(m+1),d(m+1);
    vector<node> c(m+1);

    for(int i=1;i<=m;i++) cin>>d[i];
    for(int i=1;i<=m;i++){ cin>>c[i].now; c[i].id=i;}

    sort(d.begin()+1, d.begin()+m+1);
    sort(c.begin()+1, c.begin()+m+1,cmp);

    vector<int> ans(m+1);
    int r=m;
    for(int i=1;i<=m;){
        int j=i;
        while(j<=m && c[j].now==c[i].now) j++;
        int sz=j-i;
        for(int k=0;k<sz;k++){
            ans[c[i+k].id]=d[r-sz+1+k];
        }
        r-=sz;
        i=j;
    }

    for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}