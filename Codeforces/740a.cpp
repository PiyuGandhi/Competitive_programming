#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define dll double

int main()
{
	ios::sync_with_stdio(0);
	ll t,a,b,c;
	cin>>t>>a>>b>>c;

	if(t%4==0) cout<<0<<endl;
	else if(t%4==1)
	{
		cout<<min(3*a,min(b+a,c))<<endl;
	}
	else if(t%4==2)
	{
		cout<<min(2*a,min(c*2,b))<<endl;
	}
	else
	{
		cout<<min(a,min(b+c,c*3))<<endl;
	}
	return 0;
}