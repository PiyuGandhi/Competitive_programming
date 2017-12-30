#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main()
{
	ios::sync_with_stdio(0);
	ll t;
	cin>>t;
	ll k;
	while(t--)
	{
		cin>>k;
		for(ll i=0;i<k;++i)
		{
			for(ll j=0;j<k;++j)
			{
				cout<<((k+1)/2 + i + j )%k + 1<<" ";
			}
			cout<<'\n';
		}
	}
	return 0;
}