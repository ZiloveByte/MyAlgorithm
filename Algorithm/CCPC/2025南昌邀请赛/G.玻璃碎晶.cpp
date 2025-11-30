#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n<3||n==4){
        cout<<"-1\n";
        return;
    }
    int cnt_3=n/3;
    int diff=n%3;
    if(diff==1)cnt_3--;
    cout<<cnt_3<<"\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}