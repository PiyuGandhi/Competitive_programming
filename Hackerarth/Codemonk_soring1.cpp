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
struct s
{
	ll pos,val,mo;
};
bool compare(s x,s y)
{
	if(x.mo==y.mo) return x.pos<y.pos;
	return x.mo < y.mo;
}
int main()
{
    ios::sync_with_stdio(false);
    ll n,l;
    cin>>n>>l;
    vector<s> v;
    rep(i,0,n-1)
    {
    	s k;
    	cin>>k.val;
    	k.pos=i;
    	k.mo = k.val%l;
    	v.pb(k);
    }
    sort(v.begin(),v.end(),compare);
    rep(i,0,n-1)
    cout<<v[i].val<<" ";
    return 0;
}
