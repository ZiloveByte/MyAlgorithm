#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    ll start=0;
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1]) start+=a[i]-a[i-1];
    }
    if(start!=m){
        cout<<"-1\n";
        return;
    }
    vector<ll> st;
    st.reserve(m);
    for(int i=1;i<=n;i++){
        for(int j=0;j<a[i]-a[i-1];j++) st.push_back(i);
        for(int j=0;j<a[i-1]-a[i];j++){
            cout<<st.back()<<" "<<i-1<<"\n";
            st.pop_back();
            
        }
    }
    while(!st.empty()){
        cout<<st.back()<<" "<<n<<"\n";
        st.pop_back();
    }
}