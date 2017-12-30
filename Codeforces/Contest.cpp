#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int arr[n+1][n+1];
	int r,c;
	for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				cin>>arr[i][j];
				if(arr[i][j]==0)
					{
						r=i;
						c=j;
					}
			}
		}
	int sum=0;
	int req=0;
	bool ans=true;
	if(r!=n-1)
	{
		for(int i=0;i<n;++i)
		{
			req+=arr[r][i];
			sum+=arr[r+1][i];
		}
	}
	else
	{for(int i=0;i<n;++i)
	{
		req+=arr[r][i];
		sum+=arr[r-1][i];
	}
	}
	arr[r][c]=sum-req;
	int sumd1=0;
	int sumd2=0;
	int sumr=0;
	int sumc=0;
	set<int> se;
	for(int i=0;i<n;++i)
	{
		sumr=sumc=0;
		for(int j=0;j<n;++j)
		{
			sumr+=arr[i][j];
			sumc+=arr[j][i];
			if(i==j) {sumd1+=arr[i][j];}
			if(i+j==n-1){sumd2+=arr[i][j];}

		}
		se.insert(sumr);
		se.insert(sumc);

	}
	se.insert(sumd1);
	se.insert(sumd2);
	if(se.size()!=1) cout<<"-1"<<endl;
	else cout<<arr[r][c]<<endl;
	return 0;
}
