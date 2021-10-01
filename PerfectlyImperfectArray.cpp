#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans=0;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(ll i=n-1;i>=0;i--)
		{
			ll x=(a[0]+a[i])/2;
			if(a[i]>x) ans++;
			else break;
		}
		cout<<ans<<"\n";
	}
	return 0;
}