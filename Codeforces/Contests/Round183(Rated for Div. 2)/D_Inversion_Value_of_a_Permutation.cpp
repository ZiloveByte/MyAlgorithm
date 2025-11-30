#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n,k;
    cin>>n>>k;
    int T=n*(n+1)/2;
    int S=T-k;
    if (S<n||S>T){
        cout<<0<<"\n";
        return;
    }
    auto tri=[](auto x){ return x*(x+1)/2;};
    vector<vector<char>> dp(n+1,vector<char>(S+1,0));
    dp[0][0]=1;
    for(int r=1;r<=n;r++){
        for(int s=0;s<=S;s++){
            char ok=0;
            for(int L=1;L<=r;L++){
                int t=tri(L);
                if(t<=s&&dp[r-L][s-t]){
                    ok=1;
                    break;
                }
            }
            dp[r][s]=ok;
        }
    }
    if(!dp[n][S]){
        cout<<0<<"\n";
        return;
    }
    vector<int> len;
    int r=n,s=S;
    while(r){
        for(int L=1;L<=r;L++){
            int t=tri(L);
            if(t<=s&&dp[r-L][s-t]){
                len.push_back(L);
                r-=L;
                s-=t;
                break;
            }
        }
    }
    vector<int> ans;ans.reserve(n);
    int hi=n;
    for(int L:len){
        for(int x=hi-L+1;x<=hi;x++) ans.push_back(x);
        hi-=L;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}