#include <bits/stdc++.h>
#define ll long long
using namespace std;

void zilove(){
    ll n;
    cin >> n;
    double sum = 0.0;
    for(ll i = 1; i <= n; ++i){
        if(i % 2 == 1)
            sum += 1.0 / i;
        else
            sum -= 1.0 / i;
    }
    printf("%.2lf\n", sum);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll m;
    cin>>m;
    while(m--){
        zilove();
    }
    return 0;
}