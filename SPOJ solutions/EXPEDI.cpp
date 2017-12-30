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
bool compare(pii a,pii b)
{
    return a.first < b.first;
}
class comp
{
public:
bool operator()(ll a,ll b)
    {
        //if(a.second == b.second) return a.first<b.first;
        return a > b;
    }

};
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vpii stops;
        priority_queue<ll , vector<ll>, comp> fuel;
        ll sum = 0;
        rep(i,0,n-1)
        {
            ll distance,capacity;
            cin>>distance>>capacity;
            sum+=capacity;
            stops.pb(mp(distance,capacity));
        }
        ll l,p;
        cin>>l>>p;
        rep(i,0,n-1)
        {
            stops[i].first = l - stops[i].first;
        }
       // stops.insert(stops.begin(),mp(0,p));
        if(l<=p) {cout<<"0"<<endl;continue;}
        sum+=p;
        if(sum<l) {cout<<"-1"<<endl;continue;}
        ll ans = 0;
        stops.pb(mp(l,0));
        bool flag = true;
        sort(stops.begin(),stops.end(),compare);
        rep(i,0,n-1)
        {
            if(stops[i].first >= p) {fuel.push(stops[i].second);}
            else{
                while(stops[i].first < p && (i+1) != n && fuel.size()!=0)
                {
                    p += fuel.top();
                    fuel.pop();
                    ans++;
                    if(fuel.size()==0 && stops[i].first < p) {cout<<"-1"<<endl;flag = false;break;}
                }
            }
        }
        if(flag)
        cout<<ans<<endl;
    }
    return 0;
}
