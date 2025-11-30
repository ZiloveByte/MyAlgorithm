#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;

string solve(string s){
    string res;
    int n=s.size();
    for(int i=0;i<n;){
        if(s[i]!='['){
            res.push_back(s[i++]);
        }else{
            int j=i+1;
            ll k=0;
            while(j<n && isdigit(s[j])){ k=k*10+(s[j]-'0'); j++; }
            int cnt=1, p=j;
            while(j<n && cnt){
                if(s[j]=='[') cnt++;
                else if(s[j]==']') cnt--;
                j++;
            }
            string inner=s.substr(p,(j-1)-p);
            string dec=solve(inner);
            if(k<=0) k=1;
            string tmp; tmp.reserve(dec.size()*k);
            
            for(ll t=0;t<k;t++) tmp+=dec;
            res+=tmp;
            i=j;
        }
    }
    return res;
}

void Nuyoah(){
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}