#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define ma 10000003

int main()
{
	ll q;
	cin>>q;
	vector<ll> tt;
	vector<ll> wt;
	ll ch,x,t;
	while(q--)
	{
		
		cin>>ch>>x>>t;
		if(ch==1)
		{
			tt.push_back(t);
			wt.push_back(x);
		//<<endl;
			if(wt.size()>1) wt[wt.size()-1]+=wt[wt.size()-2];
		//	cout<<wt[wt.size()-1]<<endl;
		
		}
	//	cout<<wt[0]<<" "<<wt[1]<<endl;
		if(ch==2)
		{
			ll ans=0;
			if(binary_search(tt.begin(),tt.end(),t))
			{ans = wt[(ll) (lower_bound(tt.begin(),tt.end(),t)-tt.begin())];
				
			}
			else
			ans = wt[(ll) (lower_bound(tt.begin(),tt.end(),t)-tt.begin()) -1];
		//	cout<<ans<<endl;
			if(lower_bound(tt.begin(),tt.end(),t-x)-tt.begin() != 0)
			ans-= wt[(ll) (lower_bound(tt.begin(),tt.end(),t-x)-tt.begin()) -1];
			
		cout<<ans<<endl;
		}

	}
	return 0;
}