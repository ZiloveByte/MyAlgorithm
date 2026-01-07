#include <bits/stdc++.h>
using namespace std;
constexpr int N=1e7+7;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;

int min_p[N];
vector<int> pri;

void pre(int n) {
    for (int i = 2; i <= n; ++i) {
        if (min_p[i] == 0) {
            pri.push_back(i);
            min_p[i] = i; 
        }
        for (int pri_j : pri) {
            if (i * pri_j > n) break;
            min_p[i * pri_j] = pri_j; 
            if (i % pri_j == 0) break; 
        }
    }
}

void solve() {
    i64 n;
    cin>>n;
    vector<i64> d1_ans(n),d2_ans(n);
    for(int i=0;i<n;i++){
        i64 a;
        cin>>a;
        i64 p = min_p[a];
        if (p == 0 || p == a) {
            d1_ans[i] = d2_ans[i] = -1;
            continue;
        }
        i64 d1=1;
        i64 val=a;
        while(val%p==0){
            val/=p;
            d1*=p;
        }
        i64 d2=val;
        if(d2==1){
            d1_ans[i]=-1;
            d2_ans[i]=-1;
        }else{
            d1_ans[i]=d1;
            d2_ans[i]=d2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<d1_ans[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<d2_ans[i]<<" ";
    }
    cout<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pre(N);
    solve();
    return 0;
}