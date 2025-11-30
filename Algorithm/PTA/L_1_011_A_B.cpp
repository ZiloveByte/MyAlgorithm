#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int lens=a.size();
    for(int i=0;i<lens;i++){
        if(b.find(a[i])==-1) cout<<a[i];
    }
}