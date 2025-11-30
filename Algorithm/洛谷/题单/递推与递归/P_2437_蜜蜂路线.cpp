#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 80112002;
    
using ll=long long;
using ull=unsigned long long;

string add_str(const string& a,const string& b){
    string r; int i=(int)a.size()-1,j=(int)b.size()-1,carry=0;
    while(i>=0||j>=0||carry){
        int s=carry;
        if(i>=0) s+=a[i--]-'0';
        if(j>=0) s+=b[j--]-'0';
        r.push_back(char('0'+(s%10)));
        carry=s/10;
    }
    reverse(r.begin(),r.end());
    return r;
}

string fib_big(int k){
    if(k==0) return "0";
    if(k==1||k==2) return "1";
    string a="1",b="1";
    for(int i=3;i<=k;i++){
        string c=add_str(a,b);
        a=b; b=c;
    }
    return b;
}

void Nuyoah(){
    int m,n;
    cin>>m>>n;
    int k=n-m+1;
    cout<<fib_big(k)<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}