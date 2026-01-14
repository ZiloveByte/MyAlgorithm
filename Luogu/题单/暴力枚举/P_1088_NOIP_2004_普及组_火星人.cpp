#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    ll n,m;
    cin>>n>>m;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    while(m--&&next_permutation(arr.begin(),arr.end()));
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}