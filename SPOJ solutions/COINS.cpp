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
map<ll,ll> m;
ll fun(ll n)
{
    if(n==0) return 0;
    if(m[n]!=0) return m[n];

    ll ans = fun(n/2) + fun(n/4) + fun(n/3);
    if(ans>n) m[n]= ans;
    else m[n] = n;
    return m[n];
}
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    while(cin>>n)
    {
        cout<<fun(n)<<endl;
    }
    return 0;
}
