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
ll tree[20005];
ll arr[20005];
ll inv[20005];
ll n;
void update(ll idx,ll val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+= (idx&(-idx));
    }
}
void conv()
{
    ll temp[n+5];
    rep(i,0,n-1) temp[i] = arr[i];
    sort(temp,temp+n);
    rep(i,0,n-1)
    {
        arr[i] = lower_bound(temp,temp+n,arr[i]) - temp+1;
    }
}
ll query(ll idx)
{
    ll ans=0;
    while(idx>0)
    {
        ans+=tree[idx];
        idx-=(idx&(-idx));
    }
    return ans;
}
ll inv_cnt()
{
    rep(i,0,n) tree[i] = 0;
    ll ans=0;
    for(ll i=n-1;i>=0;--i)
    {
        inv[arr[i]] = query(arr[i]-1);
        ans+= inv[i];
        update(arr[i],1);
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    rep(i,0,n-1)
    {
        cin>>arr[i];
    }
    ll q;
    cin>>q;
    conv();
    inv_cnt();
    while(q--)
    {
        ll left,right;
        cin>>left>>right;
        ll ans= inv[right-1] - inv[left-1] ;
        cout<<ans<<endl;
    }
    return 0;
}
