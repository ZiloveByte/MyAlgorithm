#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,w,cnt=0,cnt1=0;
    cin>>n>>w;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>=35&&w!=4) cnt++;
        if(a[i]>=35&&w==4) cnt1++;
        w++;
        if(w==8)w=1;
        
    }
    cout<<cnt<<" "<<cnt1<<"\n";
    return 0;
}