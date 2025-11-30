#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct gongjian{
    ll jqh,sj;
}gj_sx[20][20];

ll gj_last[20],gj_gx[20],jq_sj[20][8000];

bool check(ll bgtime,ll endtime,ll jqh){
    for(ll i=bgtime;i<=endtime;i++){
        if(jq_sj[jqh][i]==1) return false;
    }
    return true;
}
void zilove(){
    ll m,n;
    cin>>m>>n;
    ll shunxu[400];
    for(ll i=0;i<n*m;i++){
        cin>>shunxu[i];
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>gj_sx[i][j].jqh;
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>gj_sx[i][j].sj;
        }
    }
    for(ll i=1;i<=n;i++){
        gj_gx[i]=1;
    }
    for(ll i=0;i<n*m;i++){
        ll gj=shunxu[i];
        ll gx=gj_gx[gj]++;
        ll jqh=gj_sx[gj][gx].jqh;
        ll sj=gj_sx[gj][gx].sj;
        ll bgtime=gj_last[gj];
        while(true){
            if(check(bgtime+1,bgtime+sj,jqh)){
                for(ll j=bgtime+1;j<=bgtime+sj;j++){
                    jq_sj[jqh][j]=1;
                }
                gj_last[gj]=bgtime+sj;
                break;
            }
            bgtime++;
        }
    }
    ll maxn=gj_last[1];
    for(ll i=1;i<=n;i++){
        if(maxn<gj_last[i])maxn=gj_last[i];
    }
    cout<<maxn;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}