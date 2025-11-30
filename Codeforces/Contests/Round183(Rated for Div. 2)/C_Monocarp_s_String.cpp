#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n;
    string s;
    cin>>n>>s;

    int A=0,B=0;
    for(char c:s)(c=='a'?A:B)++;

    if(A==B){
        cout<<0<<"\n";
        return;
    }

    int D=A-B;
    int off=n;
    vector<int> last(2*n+3,-1);
    int ans=n;
    int pref=0;

    last[off]=0;
    for(int j=1;j<=n;++j){
        pref+=(s[j-1]=='a'?1:-1);

        int need=pref-D;
        if(-n<=need&&need<=n&&last[need+off]!=-1){
            ans=min(ans,j-last[need+off]);
        }
        last[pref+off]=j;
    }

    cout<<(ans==n?-1:ans)<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}