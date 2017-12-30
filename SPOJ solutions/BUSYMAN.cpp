/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll int
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<ll>
#define pii pair<ll,ll>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 100005

bool compare(pair<int,int> a , pair<int,int> b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    ll T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<pair<int,int> > v;
        rep(i,0,N-1)
        {
            int beg,fin;
            cin>>beg>>fin;
            v.push_back( make_pair(beg,fin));
        }
        sort(v.begin(),v.end(),compare);
        int ans = 1;
        int last = v[0].second;
        rep(i,1,N-1)
        {
            if(last <= v[i].first)
            {
                ans++;
                last = v[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
