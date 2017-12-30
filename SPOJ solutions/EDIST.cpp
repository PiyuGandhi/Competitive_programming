#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i = j ; i <= n; ++i)

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    ll dp[2000+1][2000+1];
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        ll n = a.length(),m = b.length();
        rep(i,0,n) dp[i][0] = i;
        rep(i,0,m) dp[0][i] = i;
        rep(i,1,n)
        {
            rep(j,1,m)
            {

                if(a[i-1] == b[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) + 1;
            }
        }
        cout<<dp[n][m]<<endl;
       /* for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=m;++j)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<'\n';
        }*/
    }

    return 0;
}
