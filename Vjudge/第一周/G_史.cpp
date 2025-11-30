#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,na,nb,marka=0,scorea=0,scoreb=0,markb=0;
    cin>>n>>na>>nb;
    int a[na],b[nb],c[2][n];
    for(int i=0;i<na;i++) cin>>a[i];
    for(int i=0;i<nb;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        c[0][i]=a[marka];
        c[1][i]=b[markb];
        marka++;
        markb++;
        if(marka==na)marka=0;
        if(markb==nb)markb=0;
    }
    for(int i=0;i<n;i++){
        if(c[0][i]==0&&(c[1][i]==2||c[1][i]==3)) {
            scorea++;
            continue;
        }
        else if(c[0][i]==1&&(c[1][i]==0||c[1][i]==3)) {
            scorea++;
            continue;
        }
        else if(c[0][i]==2&&(c[1][i]==1||c[1][i]==4)) {
            scorea++;
            continue;
        }
        else if(c[0][i]==3&&(c[1][i]==2||c[1][i]==4)) {
            scorea++;
            continue;
        }
        else if(c[0][i]==4&&(c[1][i]==0||c[1][i]==1)) {
            scorea++;
            continue;
        }
        else if(c[1][i]==0&&(c[0][i]==2||c[0][i]==3)) {
            scoreb++;
            continue;
        }
        else if(c[1][i]==1&&(c[0][i]==0||c[0][i]==3)) {
            scoreb++;
            continue;
        }
        else if(c[1][i]==2&&(c[0][i]==1||c[0][i]==4)) {
            scoreb++;
            continue;
        }
        else if(c[1][i]==3&&(c[0][i]==2||c[0][i]==4)) {
            scoreb++;
            continue;
        }
        else if(c[1][i]==4&&(c[0][i]==0||c[0][i]==1)) {
            scoreb++;
            continue;
        }
    }
    cout<<scorea<<" "<<scoreb;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}