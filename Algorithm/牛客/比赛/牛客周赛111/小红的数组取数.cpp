#include <bits/stdc++.h>
using namespace std;
    
using ll=long long;
using ull=unsigned long long;
    
void Nuyoah(){
	int n;
	cin>>n;
	vector<ll>a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	int x=0,y=0;
	for(int i=1;i<n;i++) if(a[i]<a[x]) x=i;
	for(int i=1;i<n;i++) if(b[i]>b[y]) y=i;
	cout<<x+1<<" "<<y+1<<"\n";
}
    
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Nuyoah();
	return 0;
}