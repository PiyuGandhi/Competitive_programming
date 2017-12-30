#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define rep(i,j,n) for(ll i=j;i<=n;++i)

int main()
{
	ios::sync_with_stdio(0);
	ll n,q;
	cin>>n>>q;
	ll arr[n+1],to,from;
	rep(i,0,n-1) cin>>arr[i];
	ll ans=0;
	while(q--)
	{
		ll sum=0;
		cin>>from>>to;
		rep(i,from-1,to-1)
		{
			sum+=arr[i];
		}
		if(sum>0) ans+=sum;
	}
	cout<<ans<<endl;
	return 0;
}