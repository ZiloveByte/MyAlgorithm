#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s1,s2;
    cin>>n;
    cin>>s1;
    vector<int> cnt(26,0);
    for(auto c:s1){
        if(isalpha(c)){
            cnt[c-'a']++;
        }
    }
    sort(cnt.begin(),cnt.end(),greater<int>());
    vector<int> res;
    for (auto x:cnt) {
        if(x>0)res.push_back(x);
    }
    bool check=true;
    for(int i=0;i<res.size()-1;i++){
        if(res[i+1]!=res[i]-1){
            check=false;
            break;
        }
    }
    cout<<(check?"YES":"NO")<<'\n';
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}