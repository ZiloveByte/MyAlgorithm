#include<bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}
void Nuyoah(){
    vector<pair<ll,ll>>node(3);
    for(int i=0;i<3;i++) cin>>node[i].first>>node[i].second;
    sort(node.begin(),node.end());
    ll x1=node[0].first,y1=node[0].second;
    ll x2=node[1].first,y2=node[1].second;
    ll x3=node[2].first,y3=node[2].second;
    ll cross=(x2-x1)*(y3-y2)-(x3-x2)*(y2-y1);
    if(cross>0){
        cout<<"UP\n";
    }else{
        cout<<"DOWN\n";
    }
}