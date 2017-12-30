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
    ll n;
    while(1)
    {
        cin>>n;
        if( n == -1 ) break;
        ll load[n+1],total = 0;
        rep(i,0,n-1)
        {
            cin>>load[i];
            total += load[i];
        }
        if(total%n != 0) {cout<<"-1"<<endl;continue;}

        total = total/n;
        ll ans = INT_MIN;
        ll dif = 0;
        rep(i,0,n-1)
        {
            dif += (load[i] - total);
            if(dif<0) ans = max(ans, -1*dif);
            else ans = max(ans,dif);
        }
        cout<<ans<<endl;

    }
    return 0;
}
