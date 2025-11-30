#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n; 
    string s;
    cin>>n>>s;

    auto cost=[&](char ch)->long long{
        vector<long long> b;
        b.reserve(n);
        for(int i=0;i<n;++i){
            if(s[i]==ch){
                b.push_back(i-b.size());
            }
        }
        int m=(int)b.size();
        if(m<=1) return 0LL;
        ll med=b[m/2];
        ll ans=0;
        for(ll v:b) ans+=llabs(v-med);
        return ans;
    };

    cout<<min(cost('a'),cost('b'))<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}