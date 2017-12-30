#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)

int main()
{
	ios::sync_with_stdio(0);
	ll t;
	cin>>t;
	string s;
	ll cnt=0;
	while(t--)
	{
		cin>>s;
		cnt=0;
		rep(i,1,s.length()-1)
		{
			if(s[i]=='>' && s[i-1]=='<') cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}