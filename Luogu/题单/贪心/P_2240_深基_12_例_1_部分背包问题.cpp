#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;

struct node{
    double m,v;
    double jg;
};

bool cmp(node a,node b){
    return a.jg>b.jg;
}

    
void Nuyoah(){
    int n,t;
    cin>>n>>t;
    vector<node>bz(n);
    for(int i=0;i<n;i++)cin>>bz[i].m>>bz[i].v,bz[i].jg=1.0*bz[i].v/bz[i].m;
    double res=0.0;
    int wei=0;
    sort(bz.begin(),bz.end(),cmp);
    for(int i=0;i<n;i++){
        if(wei==t){
            break;
        }else if(wei+bz[i].m>=t){
            res+=1.0*(t-wei)*bz[i].jg;
            wei=t;
        }else{
            res+=bz[i].v;
            wei+=bz[i].m;
        }
    }
    cout<<fixed<<setprecision(2)<<res<<" ";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}