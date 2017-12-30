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
bool special[MAX];
struct fr
{
    ll id;
    ll val;
    ll p;
    string s;
};
bool compare(fr a,fr b)
{

    if(a.val==b.val) return a.p>b.p;
    else return a.val>b.val;
}
int main()
{
    ios::sync_with_stdio(false);
    vector<fr> v;
    memset(special,0,sizeof(special));
    ll n,m;
    cin>>n;
    cin>>m;
    ll x;
    rep(i,0,n-1)
    {
        cin>>x;
        special[x] = 1;
    }
    rep(i,0,m-1)
    {
        ll a,b;
        string se;
        cin>>a>>b>>se;
        fr f ;
        f.id = a;f.p = b;f.s = se;
        if(special[a]) f.val = 100;
        else f.val = 0;
        v.pb(f);
    }
    sort(v.begin(),v.end(),compare);
    rep(i,0,v.size()-1) cout<<v[i].s<<endl;
    return 0;
}
