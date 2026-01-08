#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 n,max_len_sq=0;
    cin>>n;
    vector<vector<char>>block(105,vector<char>(105));
    vector<vector<i64>>ans(4,vector<i64>(2));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        cin>>block[i][j];
    }
    for(int x1=1;x1<=n;x1++){
        for(int y1=1;y1<=n;y1++){
            if(block[x1][y1]!='#') continue;
            for(int x2=1;x2<=n;x2++){
                for(int y2=1;y2<=n;y2++){
                    if(block[x2][y2]!='#'||(x1==x2&&y1==y2)) continue;
                    i64 dx=x2-x1;
                    i64 dy=y2-y1;
                    i64 x3=x2-dy;
                    i64 y3=y2+dx;
                    i64 x4=x1-dy;
                    i64 y4=y1+dx;
                    if(x3>=1&&x3<=n&&y3>=1&&y3<=n&&x4>=1&&x4<=n&&y4>=1&&y4<=n&&block[x3][y3]=='#'&&block[x4][y4]=='#'){
                        i64 len_sq=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
                        if (len_sq>max_len_sq){
                            max_len_sq= len_sq;
                            ans[0][0]=x1;ans[0][1]=y1;
                            ans[1][0]=x2;ans[1][1]=y2;
                            ans[2][0]=x3;ans[2][1]=y3;
                            ans[3][0]=x4;ans[3][1]=y4;
                        }
                    }
                    x3=x2+dy;
                    y3=y2-dx;
                    x4=x1+dy;
                    y4=y1-dx;
                    if (x3>=1&&x3<=n&&y3>=1&&y3<=n&&x4>=1&&x4<=n&&y4>=1&&y4<=n&&block[x3][y3]=='#'&&block[x4][y4]=='#'){
                        i64 len_sq=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
                        if(len_sq>max_len_sq){
                            max_len_sq= len_sq;
                            ans[0][0]=x1;ans[0][1]=y1;
                            ans[1][0]=x2;ans[1][1]=y2;
                            ans[2][0]=x3;ans[2][1]=y3;
                            ans[3][0]=x4;ans[3][1]=y4;
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<4;i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}