#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cout<<"o";
	for(int i=0;i<n;i++)cout<<"*";
	cout<<"--"<<"\n";
	for(int i=2;i<=n-3;i++){
		for(int j=i;j<=n;j++)cout<<"o";
		cout<<"--";
		for(int j=i;j<=n;j++)cout<<"*";
		for(int j=1;j<i;j++)cout<<"o*";
		cout<<"\n";
		for(int j=i;j<=n;j++)cout<<"o";
		for(int j=i;j<=n;j++)cout<<"*";
		cout<<"--";
		for(int j=1;j<i;j++)cout<<"o*";
		cout<<"\n";
	}
	if(n>4){
		cout<<"ooo--***";
		for(int i=1;i<=n-3;i++)cout<<"o*";
		cout<<"\n";
	}
	cout<<"ooo*o**--*";
	for(int i=1;i<=n-4;i++)cout<<"o*";
	cout<<"\n";
	cout<<"o--*o**o";
	for(int i=1;i<=n-3;i++)cout<<"o*";
	cout<<"\n";
	cout<<"o*o*o*--";
	for(int i=1;i<=n-3;i++)cout<<"o*";
	cout<<"\n";
	cout<<"--";
	for(int i=1;i<=n;i++)cout<<"o*";
    return;
}