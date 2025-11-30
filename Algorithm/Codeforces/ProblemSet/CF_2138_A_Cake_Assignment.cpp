#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    ull k,x;
    cin>>k>>x;
    vector<ull>res;
    ull s=1ULL<<k;
    ull t=s<<1;
    if(x==s){
        cout<<"0\n";
        cout<<"\n";
        return;
    }
    ull val=x;
    while(val!=s){
        if(val<s) val*=2,res.push_back(1);
        if(val>s) val=2*val-t,res.push_back(2);
    }
    reverse(res.begin(),res.end());
    cout<<res.size()<<"\n";
    for(auto a:res) cout<<a<<" ";
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