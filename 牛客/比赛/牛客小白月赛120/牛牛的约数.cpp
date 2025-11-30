#include <bits/stdc++.h>
using namespace std;
#define ll long long

void Nuyoah(){
    int n;
    cin>>n;
    vector<array<ll,2>>a(n+1);
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        a[i]={x,i};
    }
    sort(a.begin(),a.end());
    vector<int> res(n+1,-1);
    vector<array<ll,2>>v;
    res[a[1][1]]=-1;
    v.push_back({a[1][0],a[1][1]});
    for(int i=2;i<=n;i++){
        if(a[i][0]==a[i-1][0]){
            res[a[i][1]]=res[a[i-1][1]];
            continue;;
        }
        bool check=false;
        for(int j=v.size()-1;j>=0;j--){
            if(a[i][0]%v[j][0]!=0){
                check=true;
                res[a[i][1]]=v[j][1];
                break;
            }
        }
        if(!check) res[a[i][1]]=-1;
        v.push_back({a[i][0],a[i][1]});
    }
    for(int i=1;i<=n;i++) cout<<res[i]<<" ";
    cout<<"\n";
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