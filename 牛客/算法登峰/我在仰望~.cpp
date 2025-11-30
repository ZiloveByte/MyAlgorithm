#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n;
    cin>>n;
    vector<int> h(n),ans(n);
    for(int i=0;i<n;i++) cin>>h[i];
    stack<int> st;
    for(int i=0;i<n;i++){
        int val=h[i];
        while(!st.empty()&&val>h[st.top()]){
            int j=st.top();
            st.pop();
            ans[j]=i+1;
        }
        st.push(i);
    }
    for(int val:ans) cout<<val<<"\n";
}