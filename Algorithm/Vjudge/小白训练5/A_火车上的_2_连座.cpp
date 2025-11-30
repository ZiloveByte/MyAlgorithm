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
    int n;
    while(cin>>n){
        bool mark=false;
        vector<string> sss(n);
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(mark) sss[i]=s;
            else{
                int idx=s.find("OO");
                if(idx!=string::npos){
                    s[idx]='+';
                    s[idx+1]='+';
                    mark=true;
                }
                sss[i]=s;
            }
        }
        if(mark){
            cout<<"YES\n";
            for(auto val:sss) cout<<val<<"\n";
        }else cout<<"NO\n";
    }
    return;
}