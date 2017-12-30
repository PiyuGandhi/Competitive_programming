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

ll rev(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans= ans*10+(n%10);
        n = n/10;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    ll a,b;
    while(t--)
    {
        cin>>a>>b;
        cout<<rev(rev(a)+rev(b))<<endl;
    }
    return 0;
}
