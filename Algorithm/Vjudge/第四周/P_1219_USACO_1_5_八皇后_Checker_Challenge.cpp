#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll = long long;
using ull = unsigned long long;

int n, cnt;
int pos[16];
bool col[16],diag1[32],diag2[32];
vector<vector<int>> first3;

void dfs(int r){
    if (r>n){
        cnt++;
        if(first3.size()<3){
            first3.emplace_back(pos+1,pos+n+1);
        }
        return;
    }
    for (int c=1;c<=n;c++){
        int d1=r-c+n;
        int d2=r+c;
        if (col[c]||diag1[d1]||diag2[d2]) continue;
        col[c]=diag1[d1]=diag2[d2]=true;
        pos[r]=c;
        dfs(r+1);
        col[c]=diag1[d1]=diag2[d2]=false;
    }
}

void Nuyoah(){
    cin>>n;
    dfs(1);
    for(auto& seq:first3){
        for(int i=0;i<n;i++){
            cout<<seq[i]<<" ";
        }
        cout<<"\n";
    }
    cout<<cnt<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}