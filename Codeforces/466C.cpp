#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define rep(i,j,n) for(ll i=j;i<=n;++i)

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll s=0;
	rep(i,0,n-1) {cin>>arr[i];s+=arr[i];}
	ll sum[n+2],cnt[n+2];
	memset(cnt,0,sizeof(cnt));
	if(s%3!=0) {cout<<"0"<<endl;return 0;}
	s=s/3;ll ss=0;
	for(ll i = n-1;i>=0;--i)
	{
		ss+=arr[i];
		if(ss==s) cnt[i]++;
	}
	for(ll i=n-2;i>=0;--i) cnt[i]+=cnt[i+1];
	ss=0;ll ans=0;
	rep(i,0,n-3)
	{
		ss+=arr[i];
		if(ss==s) ans+=cnt[i+2];
	}
	cout<<ans<<endl;
	return 0;
}