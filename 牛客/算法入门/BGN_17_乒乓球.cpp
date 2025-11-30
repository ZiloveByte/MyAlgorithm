#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin>>s;
	int score_a=0,score_b=0;
	for(char c:s){
		if(c=='W')score_a++;
		else score_b++;
		if((score_a>=11&&score_a-score_b>=2)||(score_b>=11&&score_b-score_a>=2)){
			cout<<score_a<<":"<<score_b<<"\n";
			score_a=score_b=0;
		}
	}
	cout<<score_a<<":"<<score_b<<"\n\n";
	score_a=score_b=0;
	for(char c:s){
		if(c=='W')score_a++;
		else score_b++;
		if((score_a>=21&&score_a-score_b>=2)||(score_b>=21&&score_b-score_a>=2)){
			cout<<score_a<<":"<<score_b<<"\n";
			score_a=score_b=0;
		}
	}
	cout<<score_a<<":"<<score_b<<"\n";
	return 0;
}