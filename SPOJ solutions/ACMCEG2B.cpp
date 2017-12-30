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
#define mod 1000000007
#define MAX 100005

int main()
{
    ios::sync_with_stdio(false);
    map<pair<ll,ll> , string> m;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        string name;
        cin>>x>>y>>name;
        m[mp(x,y)] = name;
    }
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<m[mp(x,y)]<<endl;
    }
    return 0;
}
