#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    bool check=true;
    int s1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        string dir;
        cin>>dir;
        if(s1==0&&dir!="South") check=false;
        else if(s1==20000&&dir!="North") check=false;
        else if(dir=="South"){
            s1+=t;
            if(s1>20000) check=false;
        }
        else if(dir=="North"){
            s1-=t;
            if(s1<0) check=false;
        }else{

        }
    }
    if(s1!=0) check=false;
    cout<<(check?"YES\n":"NO\n");
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}