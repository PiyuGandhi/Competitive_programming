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
ll tree[4*MAX],arr[MAX],n,k;
void init(ll node,ll first,ll last)
{
    if(first==last) {tree[node] = arr[first];return;}
    ll mid=(first+last)/2;
    init(2*node,first,mid);
    init(2*node+1,mid+1,last);

    tree[node] = __gcd(tree[2*node],tree[2*node+1]);
    return;
}
ll query(ll node,ll first,ll last,ll left,ll right)
{
    //if(last<first) return 0;
    if(first>=left && last<=right) return tree[node];
    ll mid = (first+last)/2;
    if(right<=mid) return query(2*node,first,mid,left,right);
    if(left>mid) return query(2*node+1,mid+1,last,left,right);
    return __gcd(query(2*node,first,mid,left,right),query(2*node+1,mid+1,last,left,right));
}
bool check(ll x)
{
    bool ans = 0;
    rep(i,0,n-x-1)
    if(query(1,0,n-1,i,i+x-1)>=k) ans=1;

    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>k;
    rep(i,0,n-1) cin>>arr[i];
    init(1,0,n-1);
    ll left=0,right=n-1;
    while(left<=right)
    {
        ll mid = (left+right)/2;
        if(check(mid)) left = mid+1;
        else right = mid-1;
    }
    cout<<left-1<<endl;
    return 0;
}
