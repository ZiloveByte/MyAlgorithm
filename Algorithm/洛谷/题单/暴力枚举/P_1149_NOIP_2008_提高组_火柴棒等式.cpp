#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<int>vec={6,2,5,5,4,5,6,3,7,6};

int match(int x){
    if(x==0)return vec[0];
    int res=0;
    while(x){
        res+=vec[x%10];
        x/=10;
    }
    return res;
}

void zilove(){
    cin>>n;
    if(n<=4){
        cout<<0<<"\n";
        return;
    }
    n-=4;
    int ans=0;
    for (int a=0;a<=1111;a++){
        for(int b=0;b<=1111;b++){
            int c=a+b;
            if (match(a)+match(b)+match(c)==n){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}