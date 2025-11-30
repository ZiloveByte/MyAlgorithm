#include <bits/stdc++.h>
using namespace std;

bool canRemove(vector<int>& a) {
    stack<int> s;
    for (int num : a) {
        if (!s.empty() && s.top() == num) {
            s.pop();
        } else {
            s.push(num);
        }
    }
    return s.empty();
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(2*n);
    for (int i=0; i<2*n;i++){
        cin>>a[i];
    }
    if(canRemove(a)){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}