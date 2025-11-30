#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    ll n,m,x;
    cin>>n>>m>>x;
    vector<ll> a(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int val;
            cin>>val;
            if(a[j]<val){
                if(x<val-a[j]){
                    cout<<i<<"\n";
                    return;
                }else {
                    x-=val-a[j];
                    a[j]=val;
                }
            }
        }
    }
    cout<<n<<"\n";
}