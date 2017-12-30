/* All men are created equal,
   Some work harder in preseason */
/*Property Of Piyush Gandhi*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=0;
        //getchar();
        ll x;
        rep(i,0,n-1)
        {

            cin>>x;
            sum = (sum+x)%n;
        }
        if(sum==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
