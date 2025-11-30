#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

void solve() {
    ull n,m,k;
    cin>>n>>k>>m;
    if (m==n) {
        cout<<m<<"\n";
        return;
    }
    ull cnt=0;
    if (k==1) {
        cnt=m+1;
        cnt=min(cnt,n);
        n-=cnt;
        if (n>=0) cnt+=n/2;
        cout<<cnt<<"\n";
        return;
    }
    cnt=n/k;
    if (cnt==0) cout<<m<<"\n";
    else {
        cnt--;
        ull res=1+m;
        n-=res;
        cnt=min(n,cnt);
        res+=cnt/2;
        cout<<res<<"\n";
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}