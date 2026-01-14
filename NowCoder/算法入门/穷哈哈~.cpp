#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void Nuyoah(){
    cin>>n>>s;
    int res=0,cur=0;
    char prev=0;
    for(char c:s){
        if(c!='a'&&c!='h'){
            cur=0;
            prev=0;
            continue;
        }
        if(cur>0&&c!=prev) cur++;
        else cur=1;
        prev=c;
        if(cur>res) res=cur;
    }
    cout<<res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}