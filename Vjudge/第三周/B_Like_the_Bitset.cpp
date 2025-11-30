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

    int run=0;
    bool bad=false;
    for(char c:s){
        if(c=='1'){
            run++;
            if(run>=k){
                bad=true;
                break;
            }
        }else{
            run=0;
        }
    }
    if(bad){
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    vector<int> zeros,ones;
    zeros.reserve(n);
    ones.reserve(n);
    for(int i=0;i<n;i++){
        if(s[i]=='0') zeros.push_back(i);
        else ones.push_back(i);
    }

    vector<int> p(n);
    int cur=n;
    for(int index:zeros) p[index]=cur--;
    for(int index:ones)  p[index]=cur--;

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
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