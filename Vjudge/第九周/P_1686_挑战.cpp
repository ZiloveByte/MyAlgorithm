#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int n;
string s;


struct node{
    ll x,y;
    int id;
};
struct ans{
    ll lens=1e18,start=-1,end=-1;
    char fx;
}answer;

bool cmpx(node a,node b){
    if(a.x!=b.x) return a.x<b.x;
    return a.y<b.y;
}

bool cmpy(node a,node b){
    if(a.y!=b.y) return a.y<b.y;
    return a.x<b.x;
}

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void solvex(vector<node> a){
    ans t;
    for(int i=2;i<=n;i++){
        if(a[i].x==a[i-1].x){
            int id1,id2;
            ll y1,y2;
            if(a[i].id<a[i-1].id){
                id1=a[i].id;
                y1=a[i].y;
                id2=a[i-1].id;
                y2=a[i-1].y;
            }else{
                id1=a[i-1].id;
                y1=a[i-1].y;
                id2=a[i].id;
                y2=a[i].y;
            }
            t.lens=llabs(y2-y1);
            t.start=id1;
            t.end=id2;
            if(y2-y1>0) t.fx='N';
            else t.fx='S';
            if(t.start+1==t.end) continue;
            if(t.lens<answer.lens||(t.lens==answer.lens&&t.start<answer.start)||(t.lens==answer.lens&&t.start==answer.start&&t.end>answer.end)) answer=t;    }
    }
}

void solvey(vector<node> a){
    ans t;
    for(int i=2;i<=n;i++){
        if(a[i].y==a[i-1].y){
            int id1,id2;
            ll x1,x2;
            if(a[i].id<a[i-1].id){
                id1=a[i].id;
                x1=a[i].x;
                id2=a[i-1].id;
                x2=a[i-1].x;
            }else{
                id1=a[i-1].id;
                x1=a[i-1].x;
                id2=a[i].id;
                x2=a[i].x;
            }
            t.lens=llabs(x2-x1);
            t.start=id1;
            t.end=id2;
            if(x2-x1>0) t.fx='E';
            else t.fx='W';
            if(t.start+1==t.end) continue;
            if(t.lens<answer.lens||(t.lens==answer.lens&&t.start<answer.start)||(t.lens==answer.lens&&t.start==answer.start&&t.end>answer.end)) answer=t;    }
    }
}

void Nuyoah(){
    cin>>n>>s;
    vector<node> a(n+1);
    a[0].id=0;a[0].x=0;a[0].y=0;
    for(int i=1;i<=n;i++){
        a[i].id=i;
        a[i].x=a[i-1].x;
        a[i].y=a[i-1].y;
        if(s[i-1]=='N') a[i].y++;
        else if(s[i-1]=='E') a[i].x++;
        else if(s[i-1]=='W') a[i].x--;
        else if(s[i-1]=='S') a[i].y--;
    }
    sort(a.begin()+1,a.end(),cmpx);
    solvex(a);
    sort(a.begin()+1,a.end(),cmpy);
    solvey(a);
    cout<<answer.lens<<" "<<answer.start<<" "<<answer.end<<" "<<answer.fx<<"\n";
}