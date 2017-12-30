/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 100005
bool compare(pii x , pii y)
{
    if(x.first == y.first) return x.second>y.second;
    else return x.first < y.first;
}
int main()
{
    std::cin.sync_with_stdio(false);
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        vpii v(n);
        rep(i,0,n-1)
        {
            scanf("%lld %lld",&v[i].first,&v[i].second);
        }
        sort(v.begin(),v.end(),compare);
        rep(i,0,n-1)
            printf("%lld %lld\n",v[i].first,v[i].second);
    }
    return 0;
}
