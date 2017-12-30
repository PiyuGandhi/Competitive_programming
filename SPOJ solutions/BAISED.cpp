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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll pref[n+1];
        memset(pref,0,sizeof(pref));
        rep(i,0,n-1)
        {
            string s;
            ll x;
            cin>>s;
            cin>>x;
            pref[x]++;
        }
        ll badness = 0;
        bool pos[n+1];
        memset(pos,0,sizeof(pos));
        ll avail = 1;
        rep(i,1,n)
        {
            if(pref[i]>0)
            while(pref[i]>0)
            {
                pos[avail] = true;
                badness = avail - i;
                avail++;

                pref[i]--;
            }
        }
        cout<<badness<<endl;
    }
    return 0;
}
