#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=6e4+5;

ll ky_score=0,tol_lens=0,tol_cnt=0;

void zilove(){
    string str,line;
    while(getline(cin,line)){
        str+=line;
    }
    str+=" ";
    for(ll i=0;i<str.size();i++){
        if(isalnum(str[i])){
            ll start=i;
            while(i<str.size()&&isalnum(str[i]))++i;
            string gjc=str.substr(start,i-start);
            tol_lens+=gjc.length();
            tol_cnt++;
            bool upper=false,lower=false,num=false;
            for(char c:gjc){
                if(isupper(c))upper=true;
                if(islower(c))lower=true;
                if(isdigit(c))num=true;
            }
            if(upper&&lower&&num) ky_score+=5;
            else if((upper&&num)||(lower&&num))ky_score+=3;
            else if(upper&&lower)ky_score++;
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    cout<<ky_score<<"\n"<<tol_lens<<" "<<tol_cnt;
    return 0;
}