#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> seg(n);
    for(int i=0;i<n;i++) cin>>seg[i].first>>seg[i].second;
    ll ans=0;
    for(int L=0;L<=m+1;L++){
        for(int R=L;R<=m+1;R++){
            bool ok=true;
            for(auto [l,r]:seg){
                if(!(R<l||r<L||r+1==L)||R+1==l){
                    ok=false;
                    break;
                }
            }
            if(ok) ans++;
        }
    }
    cout<<ans<<"\n";
    return;
}