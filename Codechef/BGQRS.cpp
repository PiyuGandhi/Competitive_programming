/* All men are created equal,
   Some work harder in preseason */
/*Property Of Piyush Gandhi*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;i+=1)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
#define MAX 100000

struct tr
{
    ll val=1;
    ll trail=0;
};
tr tree[MAX+5];
ll n;
void update(ll idx,ll value)
{
    while(idx<=n)
    {
        tree[idx].val*=value;
        ll x = tree[idx].val;
        ll cnt=0;
        while(x%5==0 && x!=0){cnt++;x/=5;}
        if(x==0) cnt=1;
        tree[idx].trail=cnt;
        idx += (idx&(-idx));
    }
}

ll query(ll idx)
{
    ll ans=0;
    while(idx>0)
    {
        ans+=tree[idx].trail;
        idx-=(idx&(-idx));
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        rep(i,1,n) {cin>>arr[i];update(i,arr[i]);}
        while(m--)
        {
            int ch;
            cin>>ch;
            if(ch==1)
            {

            }
        }

    }
    return 0;
}
