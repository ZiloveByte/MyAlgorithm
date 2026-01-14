#include <bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
using u128 = unsigned __int128;
using i128 = __int128;
 
void solve() {
    i64 m;
    cin>>m;
    set<i64> st;
    for(int i=0;i<m;i++){
        i64 op,length;
        cin>>op>>length;
        if(op==1) {
            if(st.count(length)==0){
                st.insert(length);
            }else cout<<"Already Exist\n";
        }else{
            if(st.empty()) cout<<"Empty\n";
            else{
                auto it=st.lower_bound(length);
                auto bef=(it!=st.begin()?prev(it):st.end());
                i64 ans=0;
                if(it==st.end()){
                    ans=*bef;
                    st.erase(bef);
                }else if(bef==st.end()){
                    ans=*it;
                    st.erase(it);
                }else{
                    if(length-*bef<=*it-length){
                        ans=*bef;
                        st.erase(bef);
                    }else{
                        ans=*it;
                        st.erase(it);
                    }
                }
                cout<<ans<<"\n";
            }
        }
    }

}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}