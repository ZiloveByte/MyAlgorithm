#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,mark=1;
	long long sum=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		sum=sum+i;
		printf("%5d",i);
		if(mark%5==0&&i!=b){
			printf("\n");
		}
		mark++;
	}
	cout<<"\nSum = "<<sum<<"\n";
	return 0;
}