#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int c0=0,c1=0,c2=0;
    for(char ch: s){
        if(ch=='0') c0++;
        else if(ch=='1') c1++;
        else ++c2;
    }

    int m=n-k;
    if(m==0){
        for(int i=0;i<n;i++) cout<<'-';
        cout<<"\n";
        return;
    }

    int a_min = c0;
    int a_max = c0 + c2;

    int unionL = a_min + 1;
    int unionR = a_max + m;
    int interL = a_max + 1;
    int interR = a_min + m;

    string ans;
    ans.reserve(n);
    for(int i=1;i<=n;++i){
        if(i < unionL || i > unionR) ans.push_back('-');
        else if(interL <= interR && i >= interL && i <= interR) ans.push_back('+');
        else ans.push_back('?');
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}