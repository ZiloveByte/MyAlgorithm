#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;

int n,c;
int light_tj[101];
void Nuyoah();

bitset<100>bottom1(bitset<100> b){
	b.flip();
	return b;
}

bitset<100>bottom2(bitset<100> b){
	for(int i=1;i<=n;i+=2){
		b.flip(i-1);
	}
	return b;
}

bitset<100>bottom3(bitset<100> b){
	for(int i=2;i<=n;i+=2){
		b.flip(i-1);
	}
	return b;
}

bitset<100>bottom4(bitset<100> b){
	for(int i=0;3*i+1<=n;i++){
		b.flip(3*i);
	}
	return b;
}

bool cmp(const bitset<100> &A,const bitset<100> &B){
	for(int i=0;i<n;i++){
		if(A[i]<B[i]) return true;
		if(A[i]>B[i]) return false;
	}
	return false;
}

bool check(const bitset<100> &tmp){
	for(int i=0;i<n;i++){
		if(tmp[i]==0&&light_tj[i+1]==1) return false;
		if(tmp[i]==1&&light_tj[i+1]==-1) return false;
	}
	return true;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	Nuyoah();
	return 0;
}

void Nuyoah(){
	cin>>n>>c;
	for(int i=1;i<=n;++i) light_tj[i]=0;
	while(true){
		int x;
		cin>>x;
		if(x==-1) break;
		if(1<=x&&x<=n) light_tj[x]=1;
	}
	while(true){
		int x;
		cin>>x;
		if(x==-1) break;
		if(1<=x&&x<=n) light_tj[x]=-1;
	}
	bitset<100>first;
	for(int i=0;i<n;i++) first.set(i,1);
	vector<bitset<100>> ans;
	ans.reserve(16);
	for(int i=0;i<16;i++){
		int cnt=__builtin_popcount(i);
		if(cnt>c) continue;
		if(((c-cnt)%2)!=0) continue;
		bitset<100>cur=first;
		if(i&1)cur=bottom1(cur);
		if(i&2)cur=bottom2(cur);
		if(i&4)cur=bottom3(cur);
		if(i&8)cur=bottom4(cur);
		if(check(cur)) ans.push_back(cur);
	}
	if(!ans.empty()){
		sort(ans.begin(),ans.end(),cmp);
		vector<bitset<100>>uniq;
		uniq.reserve(ans.size());
		uniq.push_back(ans[0]);
		for(size_t i=1;i<ans.size();i++){
			bool same=true;
			for(int j=0;j<n;j++){
				if(ans[i][j]!=ans[i-1][j]){
					same=false;
					break;
				}
			}
			if(!same) uniq.push_back(ans[i]);
		}
		for(auto &bs:uniq){
			for(int i=0;i<n;i++) cout<<(bs[i]?'1':'0');
			cout<<"\n";
		}
	}else{
		cout<<"IMPOSSIBLE\n";
	}
	return;
}