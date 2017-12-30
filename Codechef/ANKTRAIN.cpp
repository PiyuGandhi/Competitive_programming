#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll temp_n = n;
		if(n>8) n = (n%8==0)?(8):n%8;
		switch(n)
		{
			case 1 : cout<<temp_n+3<<"LB\n";break;
			case 2 : cout<<temp_n+3<<"MB\n";break;
			case 3 : cout<<temp_n+3<<"UB\n";break;
			case 4 : cout<<temp_n-3<<"LB\n";break;
			case 5 : cout<<temp_n-3<<"MB\n";break;
			case 6 : cout<<temp_n-3<<"UB\n";break;
			case 7 : cout<<temp_n+1<<"SU\n";break;
			case 8 : cout<<temp_n-1<<"SL\n";break; 
		}

	}
	return 0;
}