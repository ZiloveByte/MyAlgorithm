#include <bits/stdc++.h>
using namespace std;

void zilove(){
    int n,k;
    cin>>n>>k;
    if(n<2*k){
        cout<<"-1\n";
        return;
    }
    if(k==1){
        cout<<n<<" ";
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    if(k==2){
        cout<<2<<" "<<1<<" "<<n<<"\n";
        cout<<n-2;
        for(int i=2;i<=n-1;i++){
            cout<<" "<<i;
        }
        cout<<"\n";
    }else {
        for(int i=1;i<=k-1;i++){
            cout<<2<<" "<<i<<" "<<n-i+1;
            cout<<"\n";
        }
        int size = n-2*(k-1);
        cout<<size;
        for(int i=k;i<=n-k+1;i++){
            cout<<" "<<i;
        }
        cout<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        zilove();
    }
    return 0;
}