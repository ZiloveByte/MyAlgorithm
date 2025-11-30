#include <bits/stdc++.h>
using namespace std;

bool check(long long y,long long n){
    set<int>st;
    for(int i=0;i<4;i++){
        st.insert(y%10);
        y/=10;
    }
    if(st.size()==n){
        return true;
    }else {
        return false;
    }
}

void zilove(){
    long long y,n,age;
    scanf("%lld %lld",&y,&n);
    long long ans=y;
    while(ans){
        if(check(ans,n)){
            age=ans-y;
            printf("%lld %04lld",age,ans);
            ans=0;
        }else{
            ans++;
        }
    }
}
 
int main(){
    zilove();
    return 0;
}
