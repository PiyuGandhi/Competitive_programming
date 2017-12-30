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
ll binary(ll arr[],ll n,ll item)
{
    ll lo = 1,hi = n,mid;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(arr[mid]==item) return mid;
        if(arr[mid]>item) hi--;
        else lo++;
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    ll n,q;
    cin>>n>>q;
    ll i=1;
    while(!(n==0&&q==0))
    {
        ll arr[n+1];
        rep(i,1,n) cin>>arr[i];
        sort(arr+1,arr+n+1);
        ll item;
        cout<<"CASE# "<<i<<":"<<endl;
        while(q--){

            cin>>item;
            ll k=binary(arr,n,item);
            if(!k)
            {

                cout<<item<<" not found\n";
            }
            else
            {
                ll ans = arr[k];

                while(ans==arr[k-1]) k--;
                cout<<item<<" found at "<<k<<endl;
            }
        }
        cin>>n>>q;i++;
    }
    return 0;
}
