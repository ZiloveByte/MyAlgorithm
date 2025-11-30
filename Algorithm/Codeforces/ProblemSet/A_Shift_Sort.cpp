#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_0=count(s.begin(),s.end(),'0');
    int cnt_1=n-cnt_0;
    int res=0;
    for(int i=0;i<cnt_0;i++){
        if(s[i]=='1')res++;
    }
    cout<<res<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}