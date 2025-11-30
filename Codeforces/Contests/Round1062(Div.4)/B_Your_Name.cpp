#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

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
    string s,t;
    cin>>s>>t;
    map<char,int> mp1,mp2;
    for(int i=0;i<n;i++){
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    for(char i='a';i<='z';i++){
        if(mp1[i]!=mp2[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}