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

int main()
{
    ios::sync_with_stdio(false);
    ll t;
    scanf("%lld",&t);
    ll c,d,l;
    while(t--)
    {
        scanf("%lld %lld %lld",&c,&d,&l);
        ll max_legs = (4*d) + (4*c),min_legs = 4*d;
        if(c - (d*2) > 0 )
            min_legs += (c - (d*2))*4;
        if(l %4 != 0)
        {
            printf("no\n");
            continue;
        }
        if(d==0)
        {
            if(l==c*4)
                printf("yes\n");
            else
                printf("no\n");
            continue;
        }
        if(c==0)
        {
            if(l==d*4) printf("yes\n");
            else printf("no\n");
            continue;
        }
        if(l>=min_legs && l<=max_legs )
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
