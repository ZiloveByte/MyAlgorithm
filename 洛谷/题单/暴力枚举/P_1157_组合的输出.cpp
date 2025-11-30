#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,r;
vector<ll>arr(21);
vector<ll>path;

void dfs(ll start,ll cnt){
    if(cnt==r){
        for(ll i=0;i<r;i++){
            cout<<setw(3)<<path[i];
        }
        cout<<"\n";
        return;
    }
    for(ll i=start;i<n;i++){
        path.push_back(arr[i]);
        dfs(i+1,cnt+1);
        path.pop_back();
    }
}

void zilove(){
    cin>>n>>r;
    for(ll i=0;i<n;i++){
        arr[i]=i+1;
    }
    dfs(0,0);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}