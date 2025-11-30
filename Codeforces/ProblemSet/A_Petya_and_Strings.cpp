#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]>='A'&&s1[i]<='Z')s1[i]+=32;
        if(s2[i]>='A'&&s2[i]<='Z')s2[i]+=32;
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]<s2[i]){
            cout<<"-1\n";
            return;
        }else if(s1[i]>s2[i]){
            cout<<"1\n";
            return;
        }
    }
    cout<<"0\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}