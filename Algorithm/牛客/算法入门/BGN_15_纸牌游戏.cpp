#include <bits/stdc++.h>
using namespace std;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    short a1,a2,b1,b2,res=0;
    cin>>a1>>a2>>b1>>b2;
    if(a1>b1&&a2>b2) res++;
    if(a1>b2&&a2>b1) res++;
    if(a2>b1&&a1>b2) res++;
    if(a2>b2&&a1>b1) res++;
    if(a1>b1&&a2==b2) res++;
    if(a1>b2&&a2==b1) res++;
    if(a2>b1&&a1==b2) res++;
    if(a2>b2&&a1==b1) res++;
    if(a2==b2&&a1>b1) res++;
    if(a2==b1&&a1>b2) res++;
    if(a1==b2&&a2>b1) res++;
    if(a1==b1&&a2>b2) res++;
    cout<<res<<"\n";
}