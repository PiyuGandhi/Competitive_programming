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

int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    vi v(n);
    ll m;
    cin>>m;
    rep(i,0,m-1)
    {
        ll l,r;
        cin>>l>>r;
        v[l-1]++;v[r]--;
    }
    rep(i,1,n-1) v[i]+=v[i-1];
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        cout<<(n - (lower_bound(v.begin(),v.end(),x)-v.begin()))<<endl;
    }
    return 0;
}
