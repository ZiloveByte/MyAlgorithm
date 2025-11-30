#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

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
    int n,m,x;
    cin>>n>>m>>x;
    vector<int> a(n+1),b(m+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    sort(a.begin()+1,a.end(),greater<int>()), sort(b.begin()+1,b.end(),greater<int>());
    int i=1,j=1;
    int cur=0,cnt=0;
    while(j<=m){
        if(cur>=x) break;
        if(j<=m&&cur+b[i]>=x) cur+=b[j++],cnt++;
        else if(i<=n&&a[i]!=1) cnt+=2,cur+=a[i++]*b[j++];
        else if(j<=m) cnt++,cur+=b[j++];
    }
    if(cur>=x) cout<<cnt<<"\n";
    else cout<<"-1\n";
}