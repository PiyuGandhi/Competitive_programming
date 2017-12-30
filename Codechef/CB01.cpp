#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll binomial(ll n,ll k)
{
    ll dp[k+1];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(ll i = 1;i<=n;++i)
    {
        for(ll j = min(k,i);j>0;--j)
        {
            dp[j] = dp[j] + dp[j-1];
        }
    }
    return dp[k];
}
int main()
{
    ll t;
    cin>>t;
    ll n,k;
    while(t--)
    {
        cin>>n>>k;
        cout<<binomial(n,k)<<endl;
    }
    return 0;
}
