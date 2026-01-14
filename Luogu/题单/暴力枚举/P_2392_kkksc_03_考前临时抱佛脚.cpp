#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[5],i,j,k,sum,t,hw[21],dp[2501];

void zilove(){
	for(i=1;i<=4;i++)
		cin>>a[i];
	for(i=1;i<=4;i++){
		sum=0;
		for(j=1;j<=a[i];j++){
            cin>>hw[j];
			sum+=hw[j];
        }
		for(j=1;j<=a[i];j++)
			for(k=sum/2;k>=hw[j];k--)
				dp[k]=max(dp[k],dp[k-hw[j]]+hw[j]);
		t+=sum-dp[sum/2];
		for(j=1;j<=sum/2;j++)
		dp[j]=0;
	}
	cout<<t;
	return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}