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
    freopen("A-large-practice.in","r",stdin);
    freopen("out.txt","w",stdout);
   // ios::sync_with_stdio(false);
    int t;
    cin>>t;
    rep(j,1,t)
    {
        string s;
        cin>>s;
        ll n = s.size();
        ll ans = 1;
        if(n==1)
        {
            ans = 1;
        }
        else if(n==2)
        {
            if(s[0]==s[1]) ans = 1;
            else ans = 4;
        }
        else
        {
            int c ;
            if(s[0]!=s[1]) ans*=2;
            if(s[n-1]!=s[n-2]) ans*=2;
            for(int i = 1 ; i < n-1 ; ++i)
            {
                c = 3;
                if(s[i-1] == s[i] && s[i] == s[i+1]) c = 1;
                if(s[i-1] == s[i] && s[i] != s[i+1]) c = 2;
                if(s[i-1] != s[i] && s[i] == s[i+1]) c = 2;
                if(s[i-1] == s[i+1] && s[i] != s[i-1]) c = 2;
                ans = (ans*c)%mod;

            }


        }
        cout<<"Case #"<<j<<": "<<ans<<"\n";
    }
    return 0;
}
