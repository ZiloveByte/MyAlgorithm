    #include <bits/stdc++.h>
    using namespace std;
        
    using ll=long long;
    using ull=unsigned long long;
        
    void Nuyoah(){
        ll n,val;
        cin>>n;
        vector<ll>a(n+1);
        ll sum=0;
        vector<ll>minn(n+1),maxn(n+1);
        for(int i=1;i<=n;i++){
			cin>>a[i];
			sum+=(i%2)?a[i]:-a[i];
			if(i==1) minn[1]=1+2*a[1];
			else if(i%2) minn[i]=min(minn[i-2],i+2*a[i]);
			else maxn[i]=max(maxn[i-2],2*a[i]-i);
        }

        ll ans=n-2+(n%2);

		for(int i=1; i<=n;i++){
			if(i%2) ans=max(ans,maxn[i-1]-2*a[i]+i);
			else ans=max(ans,2*a[i]-minn[i-1]+i);
		}
		cout<<ans+sum<<"\n";
    }
        
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin>>t;
        while(t--) Nuyoah();
        return 0;
    }