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
    while(t--){
    map<ll,ll> m;
    ll n;
    cin>>n;
    rep(i,0,n-1)
    {
    	ll x;
    	cin>>x;
    	if(m.find(x)!=m.end()) m[x]++;
    	else m[x]=0;
    }
    sort(m.begin(),m.end());
    map<ll,ll>::iterator it=m.begin();
    if((it - (m.end()-1))==0)
    cout<<"-1"<<endl;
    else cout<<it - (m.end()-1)<<endl;
   }
   return 0;
}
