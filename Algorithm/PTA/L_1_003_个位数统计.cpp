#include <bits/stdc++.h>
using namespace std;
int main(){
	string n,a;
	int x,temp;
	map<int ,int>mp;
	cin>>n;
	int lens=n.size();
	for(int i=0;i<lens;i++){
		a=n[i];
		int x=stoi(a);
		mp[x]++;
	}
	for(int i=0;i<=9;i++){
		if(mp[i]!=0){
			printf("%d:%d\n",i,mp[i]);
		}
	}
	return 0;
}