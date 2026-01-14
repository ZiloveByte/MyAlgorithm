#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll k){
    if(k<=1) return 0;
    ll ops=0,p=1;
    while(p<k){
        p*=2;
        ops++;
    }
    return ops;
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    map<int,ll>ca,cb;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ca[a[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        cb[b[i]]++;
    }

    int pa=0;
    for (int i=0;i<m;i++) {
        if (pa<n&&a[pa]==b[i]) {
            pa++;
        }
    }
    if(pa!=n){
        cout<<-1<<'\n';
        return;
    }
    
    for(auto const& [tmp,cnt]:cb){
        if(ca.find(tmp)==ca.end()){
            cout<<-1<<"\n";
            return;
        }
    }

    ll max_q=1;
    for(auto const& [tmp,cnt_b]:cb){
        ll cnt_a=ca[tmp];
        max_q=max(max_q,(cnt_b+cnt_a-1)/cnt_a);
    }
    cout<<solve(max_q)<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        Nuyoah();
    }
    return 0;
}
