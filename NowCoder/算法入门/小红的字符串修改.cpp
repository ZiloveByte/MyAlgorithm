#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int minres=1e9,sum=0;
    string s1,s2;
    cin>>s1>>s2;
    int s1lens=s1.length();
    int s2lens=s2.length();
    for(int i=0;i<=s2lens-s1lens;i++){
        sum=0;
        string tar=s2.substr(i,s1lens);
        for(int j=0;j<s1lens;j++){
            int diff=abs(tar[j]-s1[j]);
            int res=min(diff,26-diff);
            sum+=res;
        }
        minres=min(sum,minres);
    }
    cout<<minres<<"\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}