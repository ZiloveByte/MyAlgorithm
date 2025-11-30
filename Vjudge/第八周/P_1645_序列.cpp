#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

struct node{
    int l,r,c;
};

bool cmp(node a,node b){
    return a.r<b.r;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,ans=0;
    cin>>n;
    vector<node> a(1010);
    vector<bool> vit(1010,false);
    for(int i=1;i<=n;i++) cin>>a[i].l>>a[i].r>>a[i].c;
    sort(a.begin()+1,a.begin()+n+1,cmp);
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=a[i].l;j<=a[i].r;j++){
            if(vit[j]) sum++;
        }
        if(sum<a[i].c){
            for(int j=a[i].r;j>=a[i].l;j--){
                if(!vit[j]){
                    vit[j]=true;
                    sum++;
                    ans++;
                    if(sum==a[i].c) break;
                }
            }
        }
    }
    cout<<ans<<"\n";
    return;
}