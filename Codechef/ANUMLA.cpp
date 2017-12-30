/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll int
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
    multiset<ll> mst;
    ll n,x;
    vector<ll> form;
    vector<ll> arr;
    while(t--)
    {
    	ll temp_sum = 0;
    	cin>>n;
    	mst.clear();
    	form.clear();
    	arr.clear();
        rep(i,1,pow(2,n))
        {
            cin>>x;
            mst.insert(x);
        }
        mst.erase(mst.begin());
        rep(i,0,n-1)
        {
            ll temp = (*mst.begin());
            arr.pb(temp);
            mst.erase(mst.begin());
            rep(j,0,form.size()-1)
            {
                mst.erase(mst.find(temp+form[j]));
                form.pb(temp+form[j]);
            }
            form.pb(temp);
        }
        for(vector<ll>::iterator i = arr.begin();i<arr.end();++i)
        {
            cout<<*i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
