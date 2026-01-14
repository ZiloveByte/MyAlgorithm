#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

i64 kh(char c) {
    if (c == '{') return 4;
    if (c == '[') return 3;
    if (c == '(') return 2;
    if (c == '<') return 1;
    return 0;
}
 
void solve() {
    string s;
    cin >> s;
    stack<char> st;
    map<char, char> mp = {
        {'{', '}'}, {'[', ']'}, {'(', ')'}, {'<', '>'}
    };
    for (char c : s) {
        if (c == '{' || c == '[' || c == '(' || c == '<') {
            if (!st.empty() && kh(c) > kh(st.top())) {
                cout << "NO\n";
                return;
            }
            st.push(c);
        } 
        else {
            if (st.empty() || mp[st.top()] != c) {
                cout << "NO\n";
                return;
            }
            st.pop();
        }
    }
    if (st.empty()) cout << "YES\n";
    else cout << "NO\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}