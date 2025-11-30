#include <bits/stdc++.h>
using namespace std;

void Nuyoah(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>tol(n+1,0);
    for(int i=0;i<n;i++)cin>>a[i],tol[a[i]]++;
    bool check=true;
    for(int x=1;x<=n;x++){
        if(tol[x]%k!=0){
            check=false;
            break;
        }
    }
    if(!check){
        cout<<0<<"\n";
        return;
    }
    vector<int> target(n + 1);
    for (int x = 1; x <= n; x++) {
        target[x] = tol[x] / k;
    }
    long long ans = 0;
    vector<int> in_window(n + 1, 0);
    int left = 0; 

    for (int right = 0; right < n; right++) {
        int num = a[right];
        in_window[num]++;
        while (in_window[num] > target[num]) {
            in_window[a[left]]--;
            left++;
        }
        ans += (right - left + 1);
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)Nuyoah();
    return 0;
}