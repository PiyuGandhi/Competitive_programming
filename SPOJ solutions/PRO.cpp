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
    ll n;
    scanf("%lld",&n);
    multiset<ll> st;
    ll ans = 0;
    multiset<ll>::iterator fr;
    multiset<ll>::iterator en;
    rep(i,0,n-1)
    {
        ll t;

        scanf("%lld",&t);
        rep(i,0,t-1)
        {
            ll x;
            scanf("%lld",&x);
            st.insert(x);
        }
        fr = st.begin();
        en = st.end();
        en--;
        ans += (*en - *fr);
        st.erase(fr);
        st.erase(en);
    }
    printf("%lld",ans);
    return 0;
}
