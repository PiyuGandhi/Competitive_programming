#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define rep(i,j,n) for(ll i =j;i<=n;++i)


int main()
{
	ll t;
	cin>>t;
	bool dp[1001];
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		rep(i,0,n-1) cin>>arr[i];
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		rep(i,0,n-1)
		{
			for(ll j= k - arr[i];j>=0&&dp[k]==0;j--)
				if(dp[j]==1)
					dp[j+arr[i]] = 1;

		}
		cout<<dp[k]<<endl;
	}
	return 0;
}