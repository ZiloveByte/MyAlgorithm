#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

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
    int n,sum=0,sum1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string val;
        cin>>val;
        int or_val=stoi(val);
        sum+=or_val;
        for(char &a:val){
            if(a=='0') a='8';
        }
        int mo_val=stoi(val);
        sum1+=mo_val;
    }
    cout<<sum1-sum<<"\n";
}