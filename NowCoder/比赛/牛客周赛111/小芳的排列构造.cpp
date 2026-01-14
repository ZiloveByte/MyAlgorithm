#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;

ll Lsum(vector<int> &a){
    ll mx=0,s=0;
    for(int x:a){
        if(x>mx){
            mx=x;
            s+=x;
        }
    }
    return s;
}

ll Rsum(vector<int> &a){
    ll mx=0,s=0;
    for(int i=a.size()-1;i>=0;--i){
        int x=a[i];
        if(x>mx){
            mx=x;
            s+=x;
        }
    }
    return s;
}

void Nuyoah(){
    int n; ll k;
    cin>>n>>k;
    vector<int> p(n);
    iota(p.begin(),p.end(),1);

    do{
        if(Lsum(p)+Rsum(p)==k){
            for(int i=0;i<n;i++){
                cout<<p[i]<<" ";
            }
            cout<<'\n';
            return;
        }
    }while(next_permutation(p.begin(), p.end()));
    
    cout<<-1<<'\n';
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}