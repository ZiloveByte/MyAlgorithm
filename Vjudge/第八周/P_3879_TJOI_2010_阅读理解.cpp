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
    map<string,set<int>>ans;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        for(int j=0;j<num;j++){
            string s;
            cin>>s;
            ans[s].insert(i);
        }
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        for(auto val:ans[s]) cout<<val<<" ";
        cout<<"\n";
    }
}