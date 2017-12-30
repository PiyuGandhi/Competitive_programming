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
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i*i<=n;++i)
    {
        ans+=(n/i - i +1);
    }
    cout<<ans<<endl;
    return 0;
}
