#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    string s;
    ull n;
    cin>>s>>n;

    ull lens=s.length();
    while(lens<n)lens<<=1;
    while(lens>s.length()){
        ull half=lens>>1;
        if(n==half+1){
            n=half;
        } else if(n>half+1){
            n-=(half+1);
        }
        lens=half;
    }
    cout<<s[n-1]<<"\n";
    return;
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}   