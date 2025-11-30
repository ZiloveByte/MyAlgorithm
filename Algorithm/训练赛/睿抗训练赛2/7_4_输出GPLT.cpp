#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    ll count_G=0,count_P=0,count_L=0,count_T=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]=='G'||s[i]=='g') count_G++;
        else if(s[i]=='P'||s[i]=='p') count_P++;
        else if(s[i]=='T'||s[i]=='t') count_T++;
        else if(s[i]=='L'||s[i]=='l') count_L++;
    }
    while(count_T+count_G+count_L+count_P>0){
        if(count_G>0){
            cout<<"G";
            count_G--;
        }
        if(count_P>0){
            cout<<"P";
            count_P--;
        }
        if(count_L>0){
            cout<<"L";
            count_L--;
        }
        if(count_T>0){
            cout<<"T";
            count_T--;
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}