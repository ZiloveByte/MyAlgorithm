#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,maxn=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(n>=a){
            maxn=max(b,maxn);
        }
    }
    cout<<n-maxn<<'\n';
    return 0;
}