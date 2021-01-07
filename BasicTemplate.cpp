#include "bits/stdc++.h"
using namespace std;
#define all(x) x.begin(),x.end()
#define pb push_back
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ar array
#define int long long 
#define F(i,a,b) for(i=a;i<b;++i)
#define RF(i,b,a) for(i=b;i>=a;--i) 
#define NL cout<<"\n";
#define INF LONG_LONG_MAX

typedef long long ll;
typedef long double ld;
const ll mod=1e9+7;
bool comp(ll a,ll b)
{
	return a<b;
}
ll fpow(ll a, ll b) {

	ll res=1;
	while(b) {
		if(b&1)
			res=(res*a);
		a=(a*a);
		b>>=1;
	}
	return res;
}

ll minm(ll a,ll b){
	if(a<b) return a;
	return b;
}

ll maxm(ll a,ll b){
	if(a>b){ return a;}
	else return b;
}

int PHI(int k){
	// This is Euler's Totient Function.
	//This function returns no. of coprime numbers to N in range [1,2,....,N]

	  int ans=k;
	  for(int i=2;i*i<=k;++i){
	  	if(k%i==0){
	  		ans-=ans/i;
	  		while(k%i==0){
	  			k/=i;
	  		}
	  	}
	  }
     if(k>1) ans-=ans/k;
     return ans;
 

}

void solve(){
  

}


signed main(void)     
{

	fast;

   #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
    #endif

	int _=1;
	cin>>_;
 
      for(int test_case=1;test_case<=_;++test_case){
         solve();
      }
   
	
}

