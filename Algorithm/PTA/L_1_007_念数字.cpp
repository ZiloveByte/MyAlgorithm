#include <bits/stdc++.h>
using namespace std;
void solve1(int x){
	if(x==0) cout<<"ling";
	if(x==1) cout<<"yi";
	if(x==2) cout<<"er";
	if(x==3) cout<<"san";
	if(x==4) cout<<"si";
	if(x==5) cout<<"wu";
	if(x==6) cout<<"liu";
	if(x==7) cout<<"qi";
	if(x==8) cout<<"ba";
	if(x==9) cout<<"jiu";
}
void solve(int x){
	if(x==0) cout<<" ling";
	if(x==1) cout<<" yi";
	if(x==2) cout<<" er";
	if(x==3) cout<<" san";
	if(x==4) cout<<" si";
	if(x==5) cout<<" wu";
	if(x==6) cout<<" liu";
	if(x==7) cout<<" qi";
	if(x==8) cout<<" ba";
	if(x==9) cout<<" jiu";
}
int main(){
	string str,a;
	int x;
	cin>>str;
	int lens=str.size();
	if(str[0]=='-'){
		cout<<"fu";
		for(int i=1;i<lens;i++){
			a=str[i];
			x=stoi(a);
			solve(x);
		}
	}else{
		a=str[0];
		x=stoi(a);
		solve1(x);
		for(int i=1;i<lens;i++){
			a=str[i];
			x=stoi(a);
			solve(x);
		}
	}
	return 0;
}