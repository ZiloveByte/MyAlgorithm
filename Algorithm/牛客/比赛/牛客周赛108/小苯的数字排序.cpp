#include <bits/stdc++.h>
using namespace std;

void Nuyoah(){
    int n;
    cin>>n;
    vector<long long>odd,even;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val%2==0){
            even.push_back(val);
        }else odd.push_back(val);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    for(auto &val:even)cout<<val<<" ";
    for(auto &val:odd)cout<<val<<" ";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        Nuyoah();
    }
}