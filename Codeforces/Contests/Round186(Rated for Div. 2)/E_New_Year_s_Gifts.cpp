#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct node{
    ll x,y,z;
};

ll n,m,k;

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) Nuyoah();
    return 0;
}

void Nuyoah(){
    cin>>n>>m>>k;
    vector<ll> a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<node> fr(n);
    ll sum_y=0;
    for(int i=0;i<n;i++){
        cin>>fr[i].x>>fr[i].y>>fr[i].z;
        sum_y+=fr[i].y;
    }
    ll ys=k-sum_y;
    vector<pair<ll,ll>> people(n);
    for(int i=0;i<n;i++) people[i]={fr[i].x, fr[i].z-fr[i].y};
    sort(people.begin(), people.end());
    priority_queue<pair<ll,int>> pq;
    vector<char> boxed(n,0);
    int i=0, B=0;
    for(int j=0;j<m;j++){
        while(i<n && people[i].first<=a[j]){
            pq.push({people[i].second,i});
            i++;
        }
        if(!pq.empty()){
            auto t=pq.top(); pq.pop();
            boxed[t.second]=1;
            B++;
        }
    }

    vector<ll> left;
    left.reserve(n-B);
    for(int t=0;t<n;t++) if(!boxed[t]) left.push_back(people[t].second);
    sort(left.begin(), left.end());
    ll used=0, s=0;
    for(ll v:left){
        if(used+v<=ys){ used+=v; s++; }
        else break;
    }
    ll ans=min<ll>(n, B+s);
    cout<<ans<<"\n";
}