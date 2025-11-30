#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)arr[i]=i+1;
    do{
        for(int i=0;i<n;i++)cout<<setw(5)<<arr[i];
        cout<<"\n";
    }while(next_permutation(arr.begin(),arr.end()));
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}