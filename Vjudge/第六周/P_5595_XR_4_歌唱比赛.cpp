#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    string s,ansX,ansY;
    cin>>s;
    int lens=s.length();
    for(int i=0;i<lens;i++){
        if(s[i]=='Z'&&(s[i+1]=='X'||s[i+1]=='Y')){
            cout<<"-1\n";
            return;
        }
        if(s[i]=='X')ansX+='1',ansY+='0';
        else if(s[i]=='Y')ansY+='1',ansX+='0';
        else if(s[i]=='Z')ansX+='0',ansY+='0';
    }
    cout<<ansX<<"\n"<<ansY<<"\n";
}