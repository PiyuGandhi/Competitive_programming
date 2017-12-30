/* All men are created equal,
   Some work harder in preseason */
/*Property Of Piyush Gandhi*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
vi dp(10000,0);
ll fun(ll n)
{
    if(n<12) return n;
    if(dp[n]) return dp[n];
    else if(n>0 && n<10000)
    {
        ll ans = fun(n/2) + fun(n/3) + fun(n/4);
        dp[n] = max(ans,n);
        return dp[n];
    }
    else
    {
        return max(fun(n/2) + fun(n/3) + fun(n/4),n);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    while(cin>>n){
    cout<<fun(n)<<endl;
    }
    return 0;
}
