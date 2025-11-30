#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? abs(a) : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void zilove(){
    ll n;
    cin>>n;
    ll fz[105],fm[105],sum=0;
    for (int i=0;i<n;i++) scanf("%lld/%lld",&fz[i],&fm[i]);
    ll fmlcm=fm[0];
    for (int i=1;i<n;i++){
        fmlcm=lcm(fmlcm,fm[i]);
    }
    for (int i=0;i<n;i++){
        sum+=(fmlcm / fm[i]) * fz[i];
    }
    if (sum == 0){
        cout<<"0";
        return;
    }
    bool fu = sum < 0;
    sum = abs(sum);
    ll g = gcd(sum, fmlcm);
    sum /= g;
    fmlcm /= g;
    ll zs = sum / fmlcm;
    ll ys = sum % fmlcm;
    if (fu) cout << "-";
    if (zs != 0){
        cout<<zs;
        if (ys!=0) cout<<" ";
    }
    if (ys!=0){
        cout<<ys<<"/"<<fmlcm;
    }
}

int main() {
    zilove();
    return 0;
}