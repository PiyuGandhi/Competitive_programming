#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define rep(i,j,n) for(ll i=j;i<=n;++i)

int main()
{
	
	ll n;
	cin>>n;
	ll arr[n];
	ll ans=0;
	ll temp[3];
	rep(i,0,n-1)
	{
		cin>>temp[0]>>temp[1]>>temp[2];
		sort(temp,temp+3);
		arr[i] = temp[0]*100 + temp[1]*10 + temp[2]; 
	}
	rep(i,0,n-1)
	{
		ll x = arr[i];
		arr[i] = 0;
		if(!binary_search(arr,arr+n,x)) ans++;
		arr[i] = x;
	}
	cout<<ans<<endl;
	return 0;
}