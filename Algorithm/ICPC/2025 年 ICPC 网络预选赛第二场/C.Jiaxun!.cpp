#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll s;
    cin>>s;
    vector<ll>f(8);
    vector<ll>z(3);
    for(int i=1;i<8;i++){
        cin>>f[i];
        for(int j=0;j<3;j++){
            if((1<<j)&i)z[j]+=f[i];
        }
    }
    ll ans1=*min_element(z.begin(), z.end());
    ll ans2=(s-f[1])/2;
    ll ans3=(s-f[2])/2;
    ll ans4=(s-f[4])/2;
    ll ans5=s/3;
    cout<<min({ans1,ans2,ans3,ans4,ans5})<<'\n';
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}