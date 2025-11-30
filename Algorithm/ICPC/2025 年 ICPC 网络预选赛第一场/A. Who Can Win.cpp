#include <bits/stdc++.h>
using namespace std;

struct S{
    string n;char p;int t;string r;
};

void solve(){
    int s;
    cin>>s;
    vector<S>v(s);
    for(int i=0;i<s;i++)cin>>v[i].n>>v[i].p>>v[i].t>>v[i].r;
    sort(v.begin(),v.end(),[](auto&a,auto&b){return a.t<b.t;});

    map<string,int>ac,pt;
    map<string,map<char,pair<bool,int>>>state;
    map<string,pair<int,int>>unk;

    for(auto&x:v){
        string&n=x.n;char&p=x.p;int&t=x.t;string&r=x.r;
        if(!state.count(n))state[n]={};
        if(!state[n].count(p))state[n][p]={0,0};
        auto&[done,pen]=state[n][p];
        if(done)continue;

        if(r=="Accepted"){
            done=1;
            pen+=t;
            ac[n]++;
            pt[n]+=pen;
        }else if(r=="Rejected"){
            pen+=20;
        }else if(r=="Unknown"){
            done=1;
            unk[n].first++;
            unk[n].second+=pen+t;
        }
    }

    int max_ac=0,min_tm=INT_MAX;
    for(auto&[n,a]:ac){
        if(a>max_ac){
            max_ac=a;
            min_tm=pt[n];
        }else if(a==max_ac&&pt[n]<min_tm){
            min_tm=pt[n];
        }
    }

    set<string>win;
    for(auto&[n,a]:ac)if(a==max_ac&&pt[n]==min_tm)win.insert(n);
    for(auto&[n,u]:unk){
        int tac=ac.count(n)?ac[n]:0;
        int tpt=pt.count(n)?pt[n]:0;
        tac+=u.first;
        tpt+=u.second;
        if(tac>max_ac||(tac==max_ac&&tpt<=min_tm))win.insert(n);
    }

    bool f=1;
    for(auto&n:win){
        if(!f)cout<<' ';
        cout<<n;f=0;
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;while(t--)solve();
    return 0;
}