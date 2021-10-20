#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,q;
	cin>>n>>q;
	vector<ll> arr(n);
	cin>>arr[0];
	for(ll i=1;i<n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	while(q--){
		ll l,r;
		cin>>l>>r;
		if(l==1)cout<<arr[r-1];
		else cout<<arr[r-1]-arr[l-2];
		cout<<"\n";
	}
	return 0;
}
