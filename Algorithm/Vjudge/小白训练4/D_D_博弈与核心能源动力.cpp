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
    int m,k,g,p,res=0,val;
    cin>>m>>k>>g>>p;
    int j=max(0,m/p);
    res+=j;
    k+=j;
    g+=j;
    while(true){
        int ex=0;
        if(k>=2){
            val=k/2;
            res+=val;
            k=k%2+val;
            g+=val;
            ex+=val;
        }
        if(g>=4){
            val=g/4;
            res+=val;
            g=g%4+val;
            k+=val;
            ex+=val;
        }
        if(ex==0) break;
    }
    cout<<res<<"\n";
    return;
}