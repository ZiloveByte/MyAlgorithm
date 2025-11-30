#include <bits/stdc++.h>
using namespace std;
constexpr int p=1e9+7;

using ll=long long;

struct Z {
    ll x;
    Z(ll _x = 0) : x((_x % p + p) % p) {}
    
    Z operator*(const Z& other) const {
        return Z(x * other.x % p);
    }
    
    Z operator/(const Z& other) const {
        return *this * other.inv();
    }
    
    Z operator+(const Z& other) const {
        return Z((x + other.x) % p);
    }
    
    Z operator-(const Z& other) const {
        return Z((x - other.x + p) % p);
    }
    
    Z pow(ll exp) const {
        Z result = 1, base = *this;
        while (exp) {
            if (exp & 1) result = result * base;
            base = base * base;
            exp >>= 1;
        }
        return result;
    }
    
    Z inv() const {
        return pow(p - 2);
    }
};

struct Comb{
	int n;
	vector<Z>_fac,_inv;
	Comb():_fac{1},_inv{0}{}
	Comb(int n):Comb(){
		init(n);
	}
	void init(int m){
		if(m<=n)return;
		_fac.resize(m+1);
		_inv.resize(m+1);
		for(int i=n+1;i<=m;i++){
			_fac[i]=_fac[i-1]*i;
		}
		_inv[m]=_fac[m].inv();
		for(int i=m;i>n;i--){
			_inv[i-1]=_inv[i]*i;
		}
		n=m;
	}
	Z fac(int x){
		if(x>n)init(x);
		return _fac[x];
	}
	Z inv(int x){
		if(x>n)init(x);
		return _inv[x];
	}
	Z C(int x,int y){
		if(x<0||y<0||x<y)return 0;
		return fac(x)*inv(y)*inv(x-y);
	}
	Z P(int x,int y){
		if(x<0||y<0||x<y)return 0;
		return fac(x)*inv(x-y);
	}
}comb(1<<21);

void Nuyoah();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Nuyoah();
    return 0;
}

void Nuyoah(){
    int n,m,val=0,sum=0;
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>val,sum+=val;
    n-=sum+1;
    m--;
    cout<<comb.C(n,m).x;
    return;
}