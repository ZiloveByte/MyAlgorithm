#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;
    
using ll=long long;
using ull=unsigned long long;

struct loop{
    char val;
    string start,end;
};
    
void Nuyoah(){
    ll L;
    string timeCom;
    cin>>L>>timeCom;
    int power=0,deadCnt=0,mark=0,maxn=0;
    if(timeCom=="O(1)") power=0;
    else{
        auto p=timeCom.find('^');
        if(p==string::npos) power=1;
        else power=stoi(timeCom.substr(p+1,timeCom.size()-p-2));
    }
    stack<loop> st;
    stack<int> addS,deadS;
    bool used[128]={false},err=false;
    for(int i=0;i<L;i++){
        string op;
        cin>>op;
        if(op=="F"){
            string val,start,end;
            cin>>val>>start>>end;
            loop stk={val[0],start,end};
            if(used[stk.val]) err=true;
            bool run=true;
            if(stk.start=="n"&&stk.end!="n") run=false;
            else if(stk.start!="n"&&stk.end!="n"){
                ll a=stoll(stk.start);
                ll b=stoll(stk.end);
                if(a>b)run=false;
            }
            bool nowDead=deadCnt||!run;
            bool gxpower=!nowDead&&stk.start!="n"&&stk.end=="n";
            if(gxpower){
                mark++;
                maxn=max(maxn,mark);
            }
            used[stk.val]=true;
            st.push(stk);
            addS.push(gxpower);
            deadS.push(nowDead);
            if(nowDead) deadCnt++;
        }else{
            if(st.empty()) err=true;
            else{
                if(addS.top()) mark--;
                if(deadS.top()) deadCnt--;
                used[st.top().val]=false;
                st.pop();
                addS.pop();
                deadS.pop();
            }
        }
    }
    if(!st.empty()) err=true;
    if(err) cout<<"ERR\n";
    else if(maxn==power) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}