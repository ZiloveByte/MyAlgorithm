#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin>>T)) return 0;
    while(T--){
        int n,k;
        cin>>n>>k;
        vector<int> cnt(n+1);
        for(int i=0;i<n;i++)
        {int a;cin>>a;cnt[a]++;}
        for(int d=n;d>=1;--d){
            long long total=0;
            for(int m=d;m<=n;m+=d) 
            total += 1LL*(m/d)*cnt[m];
            if(total >= n - k){
                cout<<d<<"\n";
                break;
            }
        }
    }
    return 0;
}