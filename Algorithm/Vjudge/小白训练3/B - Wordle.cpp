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
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<8;i++){
        if(s1[i]==s2[i]) cout<<"g";
        else if(s1[i]!=s2[i]&&s1.find(s2[i])!=string::npos) cout<<"y";
        else cout<<"r";
    }
    cout<<"\n";
    if(s1==s2) cout<<"congratulations\n";
    else cout<<"defeat\n";
}