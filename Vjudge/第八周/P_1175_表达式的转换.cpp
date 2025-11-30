#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

map<char,int> symbol={{'+',1},{'-',1},{'*',2},{'/',2},{'^',3},{'(',0},{')',0}};

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    string s;
    cin>>s;
    stack<char> s1;
    vector<string> s2;
    int lens=s.length();
    for(int i=0;i<lens;){
        if(isdigit(s[i])){
            string num;
            while(i<lens&&isdigit(s[i])){
                num+=s[i];
                i++;
            }
            s2.push_back(num);
        }
        else if(s[i]=='(') s1.push(s[i]),i++;
        else if(s[i]==')'){
            while(!s1.empty()&&s1.top()!='('){
                s2.push_back(string(1,s1.top()));
                s1.pop();
            }
            if(!s1.empty()) s1.pop();
            i++;
        }
        else {
            char curr = s[i];
            while (!s1.empty() && s1.top() != '(') {
                char top = s1.top();
                if (curr=='^') {
                    if (symbol[curr] < symbol[top]) {
                        s2.push_back(string(1, top));
                        s1.pop();
                    } else break;
                } else {
                    if (symbol[curr] <= symbol[top]) {
                        s2.push_back(string(1, top));
                        s1.pop();
                    } else break;
                }
            }
            s1.push(curr);
            i++;
        }
    }
    while (!s1.empty()) {
        s2.push_back(string(1, s1.top()));
        s1.pop();
    }
    int lenss=s2.size();
    while(lenss>1){
        for(auto val:s2) cout<<val<<" ";
        cout<<"\n";
        for(int i=0;i<lenss;i++){
            if(s2[i]=="+"){
                s2[i]=to_string(stoi(s2[i-2])+stoi(s2[i-1]));
                s2.erase(s2.begin()+i-1);
                s2.erase(s2.begin()+i-2);
                break;
            }else if(s2[i]=="-"){
                s2[i]=to_string(stoi(s2[i-2])-stoi(s2[i-1]));
                s2.erase(s2.begin()+i-1);
                s2.erase(s2.begin()+i-2);
                break;
            }else if(s2[i]=="*"){
                s2[i]=to_string(stoi(s2[i-2])*stoi(s2[i-1]));
                s2.erase(s2.begin()+i-1);
                s2.erase(s2.begin()+i-2);
                break;
            }else if(s2[i]=="/"){
                s2[i]=to_string(stoi(s2[i-2])/stoi(s2[i-1]));
                s2.erase(s2.begin()+i-1);
                s2.erase(s2.begin()+i-2);
                break;
            }else if(s2[i]=="^"){
                s2[i]=to_string((int)pow(stoi(s2[i-2]),stoi(s2[i-1])));
                s2.erase(s2.begin()+i-1);
                s2.erase(s2.begin()+i-2);
                break;
            }
        }
        lenss=s2.size();
    }
    cout<<s2[0];
}