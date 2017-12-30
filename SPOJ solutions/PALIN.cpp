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
#define MAX 10000001
bool check_all(string s)
{
    ll cnt=0;
    rep(i,0,s.length()-1)
    {
        if(s[i]!='9') return false;
    }
   return true;
}
int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll  n = s.length();
        char ans[n+5];
        memset(ans,'0',sizeof(ans));
        if(check_all(s))
        {
            ans[0] = '1';
            ans[n]='1';
            ans[n+1] = '\0';
           cout<<ans<<endl;
        }
        else
        {
            ll mid=(n)/2;
            ll j=mid;
            if(n%2==0) mid--;

            while(mid>=0 && s[mid]==s[j])
            {
                mid--;j++;
            }
            if(s[mid]<s[j])
            {
                mid  = (n/2);
                j=mid;
                if(n%2==0) mid--;
                ll extra = 1;
                while(mid >= 0)
                {
                    ll x = (s[mid]-'0')+extra;
                    extra = x/10;
                    s[mid] = ( x%10 +'0');
                    s[j] = s[mid];
                    mid--;
                    j++;
                }
            }
            else
            {
                while(mid>=0)
                {
                    s[j] = s[mid];
                    j++;mid--;
                }
            }
            cout<<s<<endl;

        }
    }

    return 0;
}
