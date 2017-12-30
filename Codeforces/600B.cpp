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
    ll n,m;
    cin>>n>>m;
    ll a[n+1],b[m+1];
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,m-1) cin>>b[i];
    sort(a,a+n);
   // sort(b,b+n);
    rep(i,0,m-1)
    cout<<upper_bound(a,a+n,b[i])-a<<" ";
    cout<<endl;
    return 0;
}
