#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i = j;i<=n;++i)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n+1],cnt[n+1];
        rep(i,1,n)
        {
            cin>>arr[i];
        }
        while(m--)
        {
            ll from,to;
            cin>>from>>to;
            ll ans=1;
            rep(i,from+1,to)
            {
                cnt[i] = 1;
                rep(j,from,i-1)
                {
                    if(arr[j]<arr[i]) cnt[i] = max(cnt[j]+1,cnt[i]);
                }
                ans = max(cnt[i],ans);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
