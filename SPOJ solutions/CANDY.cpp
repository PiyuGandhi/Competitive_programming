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
    while(n!=-1)
    {
        ll arr[n];
        ll sum=0;
        rep(i,0,n-1)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n!=0) cout<<"-1"<<endl;
        else
        {
            ll ans=0,mean = sum/n;
            rep(i,0,n-1) sum+= abs(arr[i] - mean);
            cout<<ans<<endl;
        }
    }
    return 0;
}
