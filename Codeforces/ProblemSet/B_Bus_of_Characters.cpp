#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n,val;
    cin>>n;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq_min;
    priority_queue<pair<int,int>> pq_max;
    for(int i=0;i<n;i++){
        cin>>val;
        pq_min.push({val,i+1});
    }
    string s;
    cin>>s;

    int lens=s.length();
    for(int i=0;i<lens;i++){
        if(s[i]=='0'){
            auto t=pq_min.top(); pq_min.pop();
            pq_max.push(t);
            cout<<t.second<<" ";
        }else{
            auto t=pq_max.top(); pq_max.pop();
            cout<<t.second<<" ";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}