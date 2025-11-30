#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    ll n,val,a,b;
    cin>>n;
    priority_queue<ll,vector<ll>,greater<ll>>pque;
    for(int i=0;i<n;i++)cin>>val,pque.push(val);
    if (n<=1){
        cout<<"0\n";
        return;
    }
    ll res=0;
    while(pque.size()>1){
        a=pque.top();
        pque.pop();
        b=pque.top();
        pque.pop();
        res+=a+b;
        pque.push(a+b);
    }
    cout<<res<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}