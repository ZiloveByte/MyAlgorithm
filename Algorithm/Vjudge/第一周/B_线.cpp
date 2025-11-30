#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<ll,ll> x, pair<ll,ll> y){
    if (x.second!=y.second) return x.second<y.second;
    else return x.first>y.first; 
}

void Nuyoah(){
    ll n,cnt=0,start,end,last_end=-1;
    cin>>n;
    vector<pair<ll,ll>> boxs;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        boxs.push_back({a,b});
    }
    sort(boxs.begin(),boxs.end(),cmp);
    for(auto &box:boxs){
        start=box.first;
        end=box.second;
        if(start>=last_end){
            cnt++;
            last_end=end;
        }
    }
    cout<<cnt<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Nuyoah();
    return 0;
}