#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e7;

ll n,k,x[N],res=0;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void dfs(int start,int cnt,int sum){
    if(cnt==k){
        if(isPrime(sum))res++;
        return;
    }
    for(int i=start;i<n;i++){
        dfs(i+1,cnt+1,sum+x[i]);
    }
}

void zilove(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>x[i];
    dfs(0,0,0);
    cout<<res<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}