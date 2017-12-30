#include<bits/stdc++.h>

using namespace std;
#define ll long long 
#define pb push_back
#define rep(i,j,n) for(ll i=j;i<=n;++i)
ll h,n,midans;
bool check(ll arr[])
{
    ll total=0;
	rep(i,0,n-1)
	{
	    if(arr[i]>midans)
		    total+=arr[i]-midans;
		if(total>=h) return 0;
	}
	return 1;
}
bool compare(ll x,ll y)
{
    return x>y;
}
int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>h;
	ll arr[n+1];
	rep(i,0,n-1) cin>>arr[i];
	sort(arr,arr+n,compare);
	ll ans=0;
	ll loans = 0,hians = arr[0];

	ll lo  = 0,hi = n-1;
	while(loans<=hians)
	{
	    //cout<<lo<<" "<<hi<<endl;
	    //cout<<loans<<" "<<hians<<endl;
		midans = loans + (hians-loans)/2;
		if(!check(arr))
		{
		   // cout<<"MIDANS "<<midans<<endl;
			loans = midans+1;
			ans=midans;
		}
		else
		{
			hians = midans-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}

