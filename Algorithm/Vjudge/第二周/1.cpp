#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ull=unsigned long long;

void Nuyoah(){
    int n;
    if(!(cin>>n)) return;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> inc(n,1), dec(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j] < a[i]) inc[i] = max(inc[i], inc[j] + 1);
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(a[j] < a[i]) dec[i] = max(dec[i], dec[j] + 1);
        }
    }
    int best = 0;
    for(int i=0;i<n;i++) best = max(best, inc[i] + dec[i] - 1);
    cout << (n - best);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}