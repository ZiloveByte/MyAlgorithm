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
    int n,res=0;
    cin>>n;
    string s;
    map<char,int>mp;
    cin>>s;
    for(int i=n-1;i>0;i--){
        if(s[i]==s[i-1]) continue;
        else {
            res++;
            s[i-1]=s[i];
        }
    }
    cout<<res<<"\n";
}