#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define rep(i,j,n) for(ll i = j;i<=n;++i)

int main()
{
	ll n,all_positive = 1,count = 0;
	cin>>n;
	ll arr[n];
	rep(i,0,n-1) {cin>>arr[i]; if(arr[i]<0){all_positive = 0;count++;}}
	sort(arr,arr+n);
	if(all_positive) cout<<arr[0]<<endl;
	else
	{
		ll pro = 1;
		if(count%2)
		{
			rep(i,0,n-1) if(arr[i]) pro*=arr[i];
			cout<<pro<<endl;
		}
		else
		{
			rep(i,0,count-2) pro*=arr[i];
			rep(i,count,n-1) if(arr[i]) pro*=arr[i];
			cout<<pro<<endl;
		}
	}

	return 0;
}