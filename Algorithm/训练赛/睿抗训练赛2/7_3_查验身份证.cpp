#include <bits/stdc++.h>
using namespace std;

char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int qz[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
bool check=true;


string s;

void zilove(){
    cin>>s;
    long long sum=0;
    for(int i=0;i<17;i++){
        if(!isdigit(s[i])){
            cout<<s<<"\n";
            check=false;
            return;
        }
        sum+=(s[i]-'0')*qz[i];
    }
    int z=sum%11;
    if(s[17]!=M[z]){
        cout<<s<<"\n";
        check=false;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        zilove();
    }
    if(check){
        cout<<"All passed";
    }
    return 0;
}