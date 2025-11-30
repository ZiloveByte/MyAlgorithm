#include <bits/stdc++.h>
using namespace std;

int score[2][4];

void zilove(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c,p;
        cin>>c>>p;
        score[c][p]++;
    }
    for(int i=0;i<2;i++){
        cout<<score[i][1]<<" "<<score[i][2]<<" "<<score[i][3]<<"\n";
    }
    if(score[0][1]>score[1][1]) cout<<"The first win!\n";
    else if(score[0][2]>score[1][2]) cout<<"The first win!\n";
    else if(score[0][3]>score[1][3]) cout<<"The first win!\n";
    else cout<<"The second win!\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    zilove();
    return 0;
}