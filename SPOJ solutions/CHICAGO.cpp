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
ll n;
double adj[1000+1][1000+1];

void floyd()
{
    rep(i,1,n)
    {
        rep(j,1,n)
        {
            rep(k,1,n)
            {
            	if(i!=j && j!=k && i!=k)
                adj[j][k] = max(adj[j][k], ((adj[j][i]) * (adj[i][k])));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    ll m;
    while(true)
    {
        cin>>n;
        if(n==0)break;
        rep(i,0,n) rep(j,0,n)adj[i][j] = 0;
        cin>>m;
        rep(i,0,m-1)
        {
            ll x,y;
            double z;
            cin>>x>>y>>z;
            //cout<<z<<" "<<z/100.0<<endl;
            adj[x][y] = adj[y][x] =  (z/100.0);
        }
        floyd();
       //rep(i,1,n) {rep(j,1,n) printf(" %f \n",adj[i][j]*100.0);}

        printf("%0.6lf percent\n",adj[1][n]*100.0);
    }
    return 0;
}
