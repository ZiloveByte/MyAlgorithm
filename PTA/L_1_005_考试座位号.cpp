#include <bits/stdc++.h>
using namespace std;

struct node{
	long long zkz;
	int kszwh;
}s[1050];

int main(){
	long long n,m,x,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		s[b].zkz=a;
		s[b].kszwh=c;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x;
		cout<<s[x].zkz<<" "<<s[x].kszwh<<"\n";
	}
	return 0;
}