#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

ll n,mark=0;

void Nuyoah(){
    cin>>n;
    list<int> q;
    q.push_back(1);

    vector<list<int>::iterator> pos(n+1);
    vector<char> alive(n+1, 0);

    pos[1]=q.begin();
    alive[1]=1;

    for(int i=2;i<=n;i++){
        int k,p;
        cin>>k>>p;
        if (p==0){
            pos[i]=q.insert(pos[k], i);
        }else{
            auto it=pos[k];
            it++;
            pos[i]=q.insert(it, i);
        }
        alive[i]=1;
    }

    int m;
    cin>>m;
    for (int i=0;i<m;i++){
        int x;
        cin>>x;
        if(x>=1&&x<=n&&alive[x]){
            q.erase(pos[x]);
            alive[x]=0;
        }
    }

    bool first=true;
    for(int x:q){
        if(!first)cout<<" ";
        cout<<x;
        first=false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}