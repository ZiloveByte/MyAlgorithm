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
    string s,res;
    cin>>s;
    for(auto& val:s){
        if(val=='w') res+="vv";
        else if(val=='m') res+="nn";
        else res+=val;
    }
    s=res;
    for(auto& val:s){
        if(val=='b'||val=='p'||val=='d') val='q';
        else if(val=='n') val='u';
    }
    res=s;
    reverse(s.begin(),s.end());
    if(res==s) cout<<"YES\n";
    else cout<<"NO\n";
}