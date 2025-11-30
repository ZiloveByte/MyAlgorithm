#include <bits/stdc++.h>
using namespace std;

void Nuyoah(){
    int n;
    cin>>n;
    if(n==2){
        cout<<-1<<"\n";
        return;
    }
    if(n%2!=0){
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<"\n";
    }else{
        if(n%4==0){
            for(int i=2;i<=n;i+=2) cout<<i<<" ";
            for(int i=1;i<n;i+=2) cout<<i<<" ";
            cout<<"\n";
        }else{
            for(int i=2;i<n;i+=2) cout<<i<<" ";
            cout<<1<<" "<<n<<" ";
            for(int i=3;i<n;i+=2) cout<<i<<" ";
            cout<<"\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        Nuyoah();
    }
    return 0;
}
