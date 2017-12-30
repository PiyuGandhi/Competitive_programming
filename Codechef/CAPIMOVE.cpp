/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
#include<map>
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
    set<ll> population;
    unordered_map<ll,ll> mi;
    unordered_map<ll,ll> mp;
    ll t;
    ll n;
    cin>>t;
    vector<ll> graph[50000+1];
    while(t--)
    {
        cin>>n;
        population.clear();
        mi.clear();
        mp.clear();
		rep(i,1,n) graph[i].clear();
        rep(i,1,n)
        {
            ll x;
            cin>>x;
            mi[x] = i;
            mp[i] = x;
            population.insert(x);
        }
        rep(i,0,n-1)
        {
            ll u,v;
            cin>>u>>v;
            graph[u].pb(v);
            graph[v].pb(u);
        }
        rep(i,1,n)
        {
            set<ll> temp(population.begin(),population.end());
            if(temp.find(mp[i]) !=temp.end())
            	temp.erase(temp.find(mp[ i ]));
            rep(j,0,graph[i].size()-1)
            {
                if(temp.find( mp[ graph[i][j] ] ) != temp.end())
                    {temp.erase( temp.find( mp[graph[i][j]] ) );}
            }
            if(temp.empty())
                cout<<"0 ";
            else
            {
                set<ll>::iterator it = temp.end();
                it--;
                cout<<mi[*it]<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}
