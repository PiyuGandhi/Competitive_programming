/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<ll>
#define pii pair<ll,ll>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 100005

int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector< vector<char> > grid(n+1,vector<char> (m+1));
        rep(i,0,n-1)
        {
            rep(j,0,m-1)
                cin>>grid[i][j];
        }

        /// UNSTABLE CONDITIONS:-

        bool flag = 1;

        rep(i,0,n-1)
        {
            if(flag == 0) break;
            rep(j,0,m-1)
            {
                if(flag==0) break;
                if(grid[i][j] == 'W')
                {
                    if(j==0 || j==m-1 || i==n-1)
                    {
                        flag = 0;
                        continue;
                    }

                    if(grid[i+1][j]=='A'  || grid[i][j-1]=='A' || grid[i][j+1] == 'A')
                    {
                       if(i!=0 && grid[i-1][j] == 'A') flag = 0;
                       flag = 0;
                    }

                }
                if(grid[i][j] == 'A')
                {
                    if(i != 0 )
                    {
                        if(grid[i-1][j] == 'W' || (grid[i-1][j] == 'B')) flag = 0;
                    }
                    if(j != 0)
                    {
                        if(grid[i][j-1] == 'W') flag = 0;
                    }
                    if( j != (m-1))
                    {
                        if(grid[i][j+1] == 'W') flag = 0;
                    }
                }
                if(grid[i][j] == 'B')
                {
                    if(i != (n-1))
                    {
                        if(grid[i+1][j] == 'W' || grid[i+1][j] == 'A') flag = 0;
                    }
                }
            }
        }
        if(flag == 0)
            cout<<"no\n";
        else
            cout<<"yes"<<endl;
    }
    return 0;
}
