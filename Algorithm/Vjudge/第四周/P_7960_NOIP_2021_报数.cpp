#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
constexpr int M = 1e7;
    
using ll=long long;
using ull=unsigned long long;

bool ban[M+1];
int nx[M+1];
    
bool check(int x){
    while (x) {
        if(x%10==7)return true;
        x/=10;
    }
    return false;
}

void Nuyoah(){
    int x;
    cin>>x;
    if(ban[x]) cout<<-1<<'\n';
    else cout<<nx[x]<<'\n';
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i=1;i<=M;i++){
        if(!ban[i]&&check(i)){
            for(int j=i;j<=M;j+=i) ban[j]=true;
        }
    }
    int last=0;
    for(int i=M;i>=1;i--){
        nx[i]=last;
        if(!ban[i]) last=i;
    }

    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}