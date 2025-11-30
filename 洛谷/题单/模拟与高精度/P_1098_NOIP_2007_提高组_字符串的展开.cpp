#include <bits/stdc++.h>
using namespace std;

void zilove() {
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    string s;
    getline(cin,s);
    getline(cin,s);
    int lens=s.size();
    for (int i=0; i<lens;i++) {
        if (s[i]=='-'&&i>0&&i<lens-1){
            char l=s[i-1],r=s[i+1];
            if (l<r&&((isdigit(l)&&isdigit(r))||(islower(l)&&islower(r)))){
                vector<char> chars;
                for (char c=l+1;c<r;c++){
                    chars.push_back(c);
                }
                if (p3==2) reverse(chars.begin(),chars.end());
                for (char c:chars){
                    char outc=c;
                    if (p1==1){
                    } else if(p1==2){
                        if(islower(c))outc=toupper(c);
                    } else if(p1==3){
                        outc='*';
                    }
                    for (int j=0;j<p2;j++){
                        cout<<outc;
                    }
                }
            } else {
                cout<<s[i];
            }
        } else {
            cout<<s[i];
        }
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    zilove();
    return 0;
}