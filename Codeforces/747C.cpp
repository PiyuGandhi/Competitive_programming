#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n,q;
    cin>>n>>q;
    vector<ll> t(n+2);
    ll s,ser,tim;
    while( q-- )
    {
        cin>>s>>ser>>tim;
        ll avail = 0;
        for( ll i =1; i<=n;++i)
        {
            if(t[i]<=s) avail++;
        }
        if(avail < ser)
        {
            cout<<"-1\n";
            continue;
        }
        ll ans = 0;
        for( ll i = 1 ; i<=n && (ser>0) ; ++i)
        {
            if(t[i] <= s)
            {
                t[i] = s + tim;
                ser--;
                ans += i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}