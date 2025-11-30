#include <bits/stdc++.h>
using namespace std;

void zilove(){
    bool o=false;
    string s;
    getline(cin,s);
    double cd=100.0;
    long long count_2=0,ws=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]=='2') count_2++;
    }
    int temp = stoi(s.substr(s.size()-1,1));
    if(temp%2==0){
        o=true;
    }
    if(s[0]=='-'){
        ws--;
        cd=(double)count_2/(double)ws;
        cd=cd*1.5;
        if(o) cd=cd*2.0;
    }else{
        cd=(double)count_2/(double)ws;
        if(o) cd=cd*2.0;
    }
    cd=cd*100;
    cout<<fixed<<setprecision(2)<<cd;
    cout<<"%";
    return;
}
 
int main(){
    zilove();
    return 0;
}