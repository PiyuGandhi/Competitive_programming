#include<bits/stdc++.h>

using namespace std;

#define ll long long 

ll gcd(ll a,ll b)
{
	return (b==0)?a:gcd(b,a%b);
}

int main()
{
	ios::sync_with_stdio(0);
	ll t;
	cin>>t;
	ll n;
//	cout<<gcd(2,4)<<endl;
	while(t--)
	{
		cin>>n;
		ll arr[n];
		//bool vis[n+1];
	//	memset(vis,0,sizeof(vis));
		ll cnt[n];
		for(ll i=0;i<n;++i){ cin>>arr[i];cnt[i] = 1;}
		
		
	//	for(ll i=0;i<n;++i) cout<<cnt[i]<<" ";
	//	cout<<'\n';
		
		for(ll i = 1;i<n;++i)
		{
			for(ll j = 0;j<i;++j)
			{
				if(gcd(arr[i],arr[j])>1)
				{
					cnt[i] = max(cnt[i],cnt[j]+1);
				}
			}
		}
	//	for(ll i=0;i<n;++i) cout<<cnt[i]<<" ";
	//	cout<<'\n';
		ll ans=1;
		for(ll i=0;i<n;++i) ans = max(ans,cnt[i]);
		cout<<ans<<endl;
	}
	return 0;
}