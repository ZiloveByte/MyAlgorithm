#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll w(ll a,ll b,ll c){
	static long long dp[21][21][21]={0};
	if(a<=0||b<=0||c<=0) return 1;
	if(a>20||b>20||c>20) return w(20,20,20);
	ll &res=dp[a][b][c];
	if(res) return res;
	if(a<b&&b<c) return res=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	return res=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}

int main(){
    ll a,b,c;
    while(cin>>a>>b>>c){
        if(a==-1&&b==-1&&c==-1){
            return 0;
        }
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
}