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
ll dist[MAX],n,k,m;

map<pair<ll,ll>,ll > wis;
bool dijkstra(vector< pair<pair<ll,ll>,ll>  > g[],ll start,ll wisdom)
{
    memset(dist,mod,sizeof(dist));
    set<pair<ll,ll> > s;
    dist[start] = 0;
    s.insert({dist[start],start});
    while(!s.empty())
    {
        ll v = s.begin()->second;
        s.erase(s.begin());
        vector<pair<pair<ll,ll> ,ll> >::iterator p;
        for(p = g[v].begin();p!=g[v].end();++p)
        {
            if((dist[p->second] >= dist[v] + p->first.first) && wis[mp(v,p->second)] <= wisdom )
            {
            	//cout<<v<<" "<<p.second<<"SHORTER FOUND\n";
                s.erase({dist[p->second],p->second});
                dist[p->second] = dist[v] + p->first.first ;
              //  cout<<dist[p->second]<<endl;
                s.insert({dist[p->second],p->second});
            }
        }
       // cout<<"COST OF "<<dist[n-1]<<endl;
        if(dist[n-1]<k) return true;
        else return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
    	wis.clear();
    	cin>>n>>m>>k;
    	vector< pair<pair<ll,ll>,ll>  > g[n+1];
    	rep(i,0,m-1)
    	{
    		ll x,y,cst,wid;
    		cin>>x>>y>>cst>>wid;
    		x--;y--;
    		wis[mp(x,y)] =wid;
    		wis[mp(y,x)] = wid;
    		g[x].pb(mp(mp(cst,wid),y));
    		g[y].pb(mp(mp(cst,wid),x));
    	}
    	ll low=0,ans=-1,high = mod;
    	while(low<=high)
    	{
    		ll mid = (high+low)/2;
    		if(dijkstra(g,0,mid))
    		{
    			ans = mid;
    			cout<<"TRUE"<<endl;
    			high = mid-1;
    		}
    		else
    		{
    			low = mid+1;
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
