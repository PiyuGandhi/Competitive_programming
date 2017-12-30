/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
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
    ll T;
    cin>>T;
    ll a,b,c,d,k;
    while(T--)
    {
        cin>>a>>b>>c>>d>>k;
        ll x = __gcd(a,b);
        ll y = __gcd(c,d);
        ll x1 = __gcd(x,y);
        ll ans;
        ans = x/x1;
        ans = (k/ans)/y;
        cout<<(ans)*2 + 1<<endl;
    }
    return 0;
}
