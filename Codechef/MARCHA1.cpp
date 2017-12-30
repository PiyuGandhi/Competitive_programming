#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)

int main()
{
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll arr[n];
		rep(i,0,n-1) cin>>arr[i];
		bool dp[k+1];
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		rep(i,0,n-1)
		{
			for(ll j = k - arr[i] ; j >= 0 && !dp[k] ; j-- )
			{
				if(dp[j]) dp[j+arr[i]] = 1;
			}

		}
		if(dp[k]) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}