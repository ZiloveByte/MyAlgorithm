#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    cin.ignore();
    string str="Wo AK le";
    string x;
    for(int i=0;i<n;i++){
        getline(cin,x);
        if(x.find("easy")==-1&&x.find("qiandao")==-1){
            m--;
        }
        if(m<0){
            str=x;
            break;
        }
    }
    cout<<str;
}