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
    vi pre(10);
    ll  r =3,c =4;
    vector<vi> grid(r,vi(c));
    /// creates a grid of size r*c
    //rep(i,0,r-1) grid[i].resize(c);
    rep(i,0,r-1)
    {
        rep(j,0,c-1) cout<<grid[i][j]<<" ";
        cout<<'\n';
    }
    vpii pai;
    pai.pb({3,4});
    cout<<pai[0].first<<" "<<pai[0].second<<'\n';
    return 0;
}
