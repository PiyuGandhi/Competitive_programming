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
ll max_tree[4*MAX],min_tree[4*MAX],arr[MAX],n;
void init_max(ll node,ll first,ll last)
{
    //cout<<first<<" "<<last<<endl;
    if(first==last)
        {max_tree[node] = arr[first];return;}
    ll mid = (first+last)/2;
    init_max(2*node,first,mid);
    init_max(2*node+1,mid+1,last);

    max_tree[node] = max(max_tree[2*node],max_tree[2*node+1]);
    return;
}
void init_min(ll node,ll first,ll last)
{
    if(first==last)
        {min_tree[node] = arr[first];return;}
    ll mid = (first+last)/2;
    init_min(2*node,first,mid);
    init_min(2*node+1,mid+1,last);

    min_tree[node] = min(min_tree[2*node],min_tree[2*node+1]);
    return;
}
ll query_max(ll node,ll first,ll last,ll left,ll right)
{
    if(last<first) return -INT_MAX;

   if(first>=left && last<=right)return max_tree[node];
   ll mid=(first+last)/2;
    if(right<=mid) return query_max(2*node,first,mid,left,right);
    if(left>mid) return query_max(2*node+1,mid+1,last,left,right);
    return max(query_max(2*node,first,(first+last)/2,left,right),query_max(2*node+1,(first+last)/2+1,last,left,right));
   //ll mid = (first+last)/2;

}
ll query_min(ll node,ll first,ll last,ll left,ll right)
{
    if(last<first) return INT_MAX;
    if(first>=left && last<=right) return min_tree[node];
    ll mid = (first+last)/2;
    if(right<=mid) return query_min(2*node,first,mid,left,right);
    if(left>mid) return query_min(2*node+1,mid+1,last,left,right);


    return min(query_min(2*node,first,(first+last)/2,left,right),query_min(2*node+1,(first+last)/2+1,last,left,right));
}
bool check(ll x)
{
    bool ans=0;
    rep(i,0,n-x-1)
    {
        if(((query_max(1,0,n-1,i,i+x))-query_min(1,0,n-1,i,i+x))<=1)
        ans=1;

        //cout<<i<<" "<<x<<" "<<query_max(1,0,n-1,i,i+x)<<" "<<query_min(1,0,n-1,i,i+x)<<endl;

    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
   // cout<<"n";
    rep(i,0,n-1) {cin>>arr[i];}//;cout<<arr[i]<<endl;}
   // cout<<"arr"<<endl;
    init_max(1,0,n-1);//cout<<"asldhlashd";
    init_min(1,0,n-1);
    ll l=0,r = n-1;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(check(mid)) l=mid+1;
        else r = mid-1;
    }
    cout<<l<<endl;
    return 0;
}
