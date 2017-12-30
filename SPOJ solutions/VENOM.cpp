#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
	ios::sync_with_stdio(0);
	int t,h,p,a,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&h,&p,&a);
		cin>>h>>p>>a;
		double d,x,y,z;
		x = 2*a-p;
		y = (p-2*a)*(p-2*a);
		y = y- 8*(a-h)*p;
		y = sqrt(y);
		z = 2*p;
		ans = ceil((x+y)/z);
		printf("%d",ans+ans-1);

	}
}