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
vpii arr;
ll tree[100005];
bool compare(pii i,pii j)
{
    return i.first<j.first;
}
void update(ll idx,ll val,ll n)
{
    while(idx<=n)
    {
        tree[idx]+= val;
        idx+= (idx & (-idx));
    }
}
ll query(ll idx)
{
    ll ans=0;
    while(idx>0)
    {
        ans+=tree[idx];
        idx-= (idx & (-idx));
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    rep(i,1,n)
    {
        ll male,female;
        cin>>male>>female;
        arr.pb(mp(male,female));
    }
    sort(arr.begin(),arr.end(),compare);
    ll temp[n+5];
    rep(i,0,n-1)
    {
        temp[i] = arr[i].second;
    }
   // ll temp2[n+5];
    sort(temp,temp+n);
    rep(i,0,n-1)
    {
        arr[i].second = lower_bound(temp,temp+n,arr[i].second) - temp + 1;
    }
    memset(tree,0,sizeof(tree));
    ll ans=0;
    for(ll i=n-1;i>=0;--i)
    {
        ans+=query(arr[i].second - 1);
        update(arr[i].second,1,n);
    }
    cout<< ans<< endl;
    return 0;
}
