#include<bits/stdc++.h> 
using namespace std;

int n,cnt=0;
map<int,int>mp;

int main( )
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);   
    cin>>n;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        if(mp[l]){
            if(mp[l]<r)mp[l]=r;
        }else{
            mp[l]=r;
        }
    }
    cout<<mp[3];
    return 0;
}