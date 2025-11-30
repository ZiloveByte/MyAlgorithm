#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    set<int> st; 
    do{
        for (int i=1;i<=n;i++){
            string temp=s.substr(0,i);
            int num=stoi(temp);
            st.insert(num);
        }
    }while(next_permutation(s.begin(),s.end()));
    for (auto num:st){
        if (num%d==0){
            cout<<num<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}