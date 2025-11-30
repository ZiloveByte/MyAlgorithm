#include <bits/stdc++.h>
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntA=0,cntC=0,cntE=0,cntP=0,cntT=0;
    for (char ch:s){
        switch(ch){
            case 'A': cntA++; break;
            case 'C': cntC++; break;
            case 'E': cntE++; break;
            case 'P': cntP++; break;
            case 'T': cntT++; break;
            default: break;
        }
    }
    cout<<min({cntA,cntC/2,cntE,cntP,cntT})<<"\n";
}