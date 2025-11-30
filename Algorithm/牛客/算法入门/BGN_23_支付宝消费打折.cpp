#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k,cnt=0;
    char val;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]*=100;
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1') a[i]=a[i]*95/100;
    }
    long long money=k*100;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int val : a) {
        pq.push(val);
    }
    while(!pq.empty() && money >= pq.top()) {
        money -= pq.top();
        pq.pop();
        cnt++;
    }
    cout<<cnt;
    return 0;
}