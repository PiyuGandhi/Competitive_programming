#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	ll t,n,ans,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=1;x=1;
		while(1)
		{
			x++;
			if((x*(x+1)/2)>=(n-x)) break;
			ans++;
		}
		if(n==1) ans=1;
		cout<<ans<<endl;
	}
	return 0;
}