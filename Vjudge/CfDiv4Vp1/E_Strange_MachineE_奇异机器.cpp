#include <bits/stdc++.h>
using namespace std;

using i64=long long;
using u64=unsigned long long;
using u32=unsigned;

using u128=unsigned __int128;
using i128=__int128;

void solve(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<pair<char,int>> vt;
    for (int i=0;i<n;){
        int j=i+1;
        for (;j<n;){
            if (s[j]==s[i]) j++;
            else break;
        }
        vt.push_back({s[i],j-i});
        i=j;
    }
    while (q--){
        int a;
        cin>>a;
        if (s.find('B')==string::npos){
            cout<<a<<"\n";
            continue;
        }
        if (s.find('A')==string::npos){
            int b=log2(a)+1;
            cout<<b<<"\n";
            continue;
        }
        int res=0,idx=0;
        int len=vt.size();
        while (a>0){
            if (vt[idx].first=='A'){
                res+=min(a,vt[idx].second);
                a-=min(a,vt[idx].second);
            }
            else if (vt[idx].first=='B'){
                int b=log2(a)+1;
                int k=min(vt[idx].second,b);
                a/=pow(2,k);
                res+=k;
            }
            idx=(idx+1)%len;
        }
        cout<<res<<"\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}