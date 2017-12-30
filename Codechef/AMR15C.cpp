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
    ll t;
    cin>>t;
    ll n,k;
    while(t--)
    {
        cin>>n>>k;
        ll arr[n+5];
        rep(i,1,n) arr[i]=i;
        if(k==0)
        {
            rep(i,1,n) cout<<i<<" ";
            cout<<endl;
            continue;
        }
        if((n/2)<k){cout<<"-1"<<endl;continue;}
        rep(i,1,n-k)
        {
            if(abs(arr[i]-i)<k || i+2*k>n) swap(arr[i],arr[i+k]);
            if(i==n-k) sort(arr+i+1,arr+n+1);
        }
        rep(i,1,n) cout<<arr[i]<<" ";
        cout<<'\n';
    }
    return 0;
}
