#include <bits/stdc++.h>
using namespace std;

struct node{
    short k=0,s=0;
};

bool cmp(node a,node b){
    if(a.s!=b.s) return a.s>b.s;
    return a.k<b.k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    short n,m;
    cin>>n>>m;
    short t=m*3/2-1;
    vector<node> score(n); 
    for(short i=0;i<n;i++){
        cin>>score[i].k>>score[i].s;
    }
    sort(score.begin(),score.end(),cmp);
    cout<<score[t].s<<" ";
    short cnt=0;
    for(auto [a,b]:score){
        if(b<score[t].s) break;
        cnt++;
    }
    cout<<cnt<<"\n";
    for(auto [a,b]:score){
        if(b<score[t].s) break;
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}