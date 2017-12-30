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
    ll x,y;
    while(t--)
    {
        cin>>x>>y;
        if((x-y)==2 || (x-y)==0)
        {
            if(x%2==0)
            {
                cout<<x+y<<endl;
            }
            else
            {
                cout<<x+y-1<<endl;
            }
        }
        else
            cout<<"No Number"<<endl;
    }
    return 0;
}
