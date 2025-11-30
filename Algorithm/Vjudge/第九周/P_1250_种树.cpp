#include <bits/stdc++.h>
using namespace std;
constexpr int MOD=998244353;

using ll=long long;
using ull=unsigned long long;

struct node{
    int b,e,t;
};

bool cmp(node a,node b){
    return a.e<b.e;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,h;
    cin>>n>>h;
    vector<node> a(h);
    for(int i=0;i<h;i++) cin>>a[i].b>>a[i].e>>a[i].t;
    sort(a.begin(),a.end(),cmp);
    vector<bool> planted(n+1,false);
    int tol=0;
    for(int i=0;i<h;i++){
        int cnt=0;
        for(int j=a[i].b;j<=a[i].e;j++){
            if(planted[j]) cnt++;
        }
        if(cnt<a[i].t){
            for(int j=a[i].e;j>=a[i].b&&cnt<a[i].t;j--){
                if(!planted[j]){
                    planted[j]=true;
                    tol++;
                    cnt++;
                }
            }
        }
    }
    cout<<tol<<"\n";
}