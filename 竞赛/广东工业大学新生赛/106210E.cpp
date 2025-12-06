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
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> pref0(n+1,0),pref1(n+1,0),pref2(n+1,0);
    for(int i=1;i<=n;i++){
        pref0[i]=pref0[i-1];
        pref1[i]=pref1[i-1];
        pref2[i]=pref2[i-1];
        int r=((a[i]%3+3)%3);
        if(r==0) pref0[i]++;
        else if(r==1) pref1[i]++;
        else pref2[i]++;
    }
    auto cnt=[&](int l,int r,int which){
        if(which==0) return pref0[r]-pref0[l-1];
        if(which==1) return pref1[r]-pref1[l-1];
        return pref2[r]-pref2[l-1];
    };
    while(q--){
        int l,r;
        cin>>l>>r;
        int c0=cnt(l,r,0);
        int c1=cnt(l,r,1);
        int c2=cnt(l,r,2);
        bool ok=false;
        if(c0>=1) ok=true;
        else if(c1>=1&&c2>=1) ok=true;
        else if(c1>=3) ok=true;
        else if(c2>=3) ok=true;
        cout<<(ok?"Yes":"No")<<'\n';
    }
    return;
}