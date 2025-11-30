#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long a,b,x;
    cin>>a>>b>>x;
    if(b/3>a){
        cout<<a*x;
        return 0;
    }
    long long val=x/3*b;
    cout<<(long long)min(val+x%3*a,val+b);
    return 0;
}