#include <bits/stdc++.h>
using namespace std;

int score[21]={0,12,9,7,5,4,3,3,2,2,2,1,1,1,1,1,0,0,0,0,0};
map<int,int>team;

void zilove(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=20;j++){
            int p,k;
            cin>>p>>k;
            team[j] = team[j] + score[p] + k;
        }

    }
    for(int i=1;i<21;i++){
        cout<<i<<" "<<team[i]<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}