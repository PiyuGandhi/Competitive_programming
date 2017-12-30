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
        ll n;cin>>n;
        ll arr[n];
        rep(i,0,n-1) cin>>arr[i];
        sort(arr,arr+n);
        bool f = 0;
        rep(i,1,n-1)
        {
            if(abs(arr[i]-arr[i-1])>1)
            {
                f = 1;break;
            }
        }
        if(!f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
