#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,m,mark=0;
    cin>>n>>m;
    priority_queue<i64> pquea,pqueb;
    for(int i=0;i<n;i++){
        i64 val;
        cin>>val;
        pquea.push(val);
    }
    for(int i=0;i<m;i++){
        i64 val;
        cin>>val;
        pqueb.push(val);
    }
    while(!pquea.empty()&&!pqueb.empty()){
        mark++;
        if(mark%2){
            if(pqueb.top()<=pquea.top()) pqueb.pop();
            else{
                i64 val=pqueb.top();
                pqueb.pop();
                pqueb.push(val-pquea.top());
            }
            if(pquea.empty()){
                cout<<"Bob\n";
                return;
            }
            else if(pqueb.empty()){
                cout<<"Alice\n";
                return;
            }
        }else{
            if(pquea.top()<=pqueb.top()) pquea.pop();
            else{
                i64 val=pquea.top();
                pquea.pop();
                pquea.push(val-pqueb.top());
            }
            if(pquea.empty()){
                cout<<"Bob\n";
                return;
            }
            else if(pqueb.empty()){
                cout<<"Alice\n";
                return;
            }
        }
    }
    
    return; 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}