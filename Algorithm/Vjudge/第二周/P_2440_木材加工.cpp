#include <bits/stdc++.h>
using namespace std;

int n,k;

bool check(int lens,vector<int> &L){
    int cnt=0;
    for(int x:L){
        cnt+=x/lens;
        if(cnt>=k) return true;
    }
    return false;
}

void Nuyoah(){
    cin>>n>>k;
    vector<int>L(n);
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>L[i];
        mx=max(mx,L[i]);
    };
    int l=1,r=mx,ans=0;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid,L)) ans=mid,l=mid+1;
        else r=mid-1;
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}