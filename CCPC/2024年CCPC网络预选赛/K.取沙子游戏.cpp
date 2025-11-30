#include <bits/stdc++.h>
using namespace std;

void Nuyoah(){
    int n,k;
    cin>>n>>k;
    if((n&(-n))<=k) cout<<"Alice\n";
    else cout<<"Bob\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) Nuyoah();
    return 0;
}