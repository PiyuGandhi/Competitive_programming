/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
#define MAX 100005
vector<ll> b;
vector<ll> c;
ll k;
ll mod;


int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>k;
        ll x;
        rep(i,1,k){cin>>x;b.pb(x);}
        rep(i,1,k){cin>>x;c.pb(x);}
        ll n,m;
        cin>>m>>n>>mod;
        ll ans = fib(n) - fib(m-1);
        if(ans<0) ans += mod;
        cout<<ans<<endl;
        b.clear();
        c.clear();
    }

    return 0;
}
