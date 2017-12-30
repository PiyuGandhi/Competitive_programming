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
    ll n,q;
    cin>>n;
    ll arr[n+5];
    rep(i,0,n-1)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    rep(i,1,n-1)
    {
        arr[i]+=arr[i-1];
    }
    cin>>q;
    while(q--)
    {
        ll k;
        cin>>k;
        ll co = ceil(1.0*n/(k+1));
        cout<<arr[co-1]<<endl;
    }
    return 0;
}
