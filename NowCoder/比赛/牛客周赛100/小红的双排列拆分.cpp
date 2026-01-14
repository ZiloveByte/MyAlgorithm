#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    int n;
    cin >> n;
    vector<int>a(n*2);
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    map<int,int>cnt;
    vector<int>ans1,ans2;
    for(int i=0;i<2*n;i++){
        if(cnt[a[i]]==0){
            ans1.push_back(a[i]);
        }else{
            ans2.push_back(a[i]);
        }
        cnt[a[i]]++;
    }
    for(int i=0;i<n;i++)cout<<ans1[i]<<" ";
    cout<<"\n";
    for(int i=0;i<n;i++)cout<<ans2[i]<<" ";
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    zilove();
    return 0;
}