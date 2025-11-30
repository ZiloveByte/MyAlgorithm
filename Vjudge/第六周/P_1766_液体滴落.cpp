#include <bits/stdc++.h>
using namespace std;
constexpr int MOD = 998244353;

using ll=long long;
using ull=unsigned long long;
double n,x,y=1e9;

struct node{
    double x1,y1,x2,y2;
    bool flag;
}line[100005];

int cmp(double X,double Y){
    int NextNum=-1;
    double NextY=-1e9;
    for(int i=0;i<n;i++){
        double Min=min(line[i].x1,line[i].x2);
        double Max=max(line[i].x1,line[i].x2);
        if(Min>=X||Max<=X||line[i].flag) continue;
        double k=(line[i].y1-line[i].y2)/(line[i].x1-line[i].x2);
        double b=line[i].y1-k*line[i].x1;
        double Y2=k*X+b;
        if(Y2>=Y) continue;
        if(NextY<Y2){
            NextY=Y2;
            NextNum=i;
        }
    }
    line[NextNum].flag=true;
    return NextNum;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>line[i].x1>>line[i].y1>>line[i].x2>>line[i].y2;
    while(1){
        int num=cmp(x,y);
        if(num==-1) break;
        if(line[num].y1<=line[num].y2){
            x=line[num].x1;
            y=line[num].y1;
        }else if(line[num].y1>=line[num].y2){
            x=line[num].x2;
            y=line[num].y2;
        }
    }
    cout<<x;
    return;
}