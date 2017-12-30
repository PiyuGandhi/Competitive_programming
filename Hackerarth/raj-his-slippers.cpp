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
    ll t;
    cin>>t;
    rep(j,1,t)
    {
        ll wake,hostel,open;
        ll hr,mi;char c;
        ll n;cin>>n;
        cin>>hr>>c>>mi;
        hostel = hr*60 + mi;
        cin>>hr>>c>>mi;
        wake = hr*60 + mi;
        cin>>hr>>c>>mi;
        open = hr*60 + mi;
        ll r,s;
        cin>>r>>s;
        if(wake>hostel || open>hostel) cout<<"Case "<<j<<": -1"<<endl;
        else{
            ll reach;
            ll leave;
            bool f=false;
            ll ans=INT_MAX;
            ll pos=-1;
            rep(i,0,n-1)
            {
                cin>>hr>>c>>mi;
                ll start = hr*60 + mi;
                cin>>hr>>c>>mi;
                ll en = hr*60 + mi;
                //cout<<start<<en<<endl;
                reach = max(open,wake+r) ;
                leave = reach + s + r;
               // cout<<reach<<" "<<leave<<endl;
                if((reach-r>=en && leave<=hostel) ||(reach<=start && leave<=start && leave<= hostel) ) {if(ans>leave){pos = i+1;ans=leave;f = 1;}}
                //if(f==true) break;
            }
            if(!f) pos = -1;
             cout<<"Case "<<j<<": "<<pos<<endl;
        }

    }
    return 0;
}
