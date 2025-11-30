#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    string s;
    int k;
    cin>>s>>k;

    string st;
    st.reserve(s.size());
    for(char c:s){
        while (!st.empty()&&k>0&&st.back()>c){
            st.pop_back();
            k--;
        }
        st.push_back(c);
    }
    if (k>0){
        if (k>=st.size()) st.clear();
        else st.erase(st.size()-k);
    }

    size_t pos= st.find_first_not_of('0');
    if(pos==EOF) cout<<"0\n";
    else cout<<st.substr(pos)<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}