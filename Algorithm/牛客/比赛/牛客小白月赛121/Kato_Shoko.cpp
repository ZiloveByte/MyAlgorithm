#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    const string s1="Kato_Shoko";
    int res=0;
    int mark=0;
    for(int i=0;i<n;i++){
        if(s[i]==s1[mark]) mark++;
        else res++;
    }
    if(mark==10){
        cout<<"YES "<<res<<"\n";
    }else cout<<"NO\n";
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}