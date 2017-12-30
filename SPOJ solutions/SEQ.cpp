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
#define mod 1000000000
#define MAX 100005


ll n,k;
vi b;
vi c;

vector<vi> buildTransition()
    {
        vector<vi> ans(k+1,vi(k+1) );
        rep(i,1,k)
        {
            rep(j,1,k)
            {
                if(i<k)
                {
                    if(j== i+1) ans[i][j] = 1;
                    else ans[i][j] = 0;

                    //continue;
                }
                 else ans[i][j] = c[k - j];
                 cout<<ans[i][j]<<" ";
            }
            cout<<'\n';
        }
        return ans;
    }
vector<vi> mul(vector<vi> a,vector<vi> b)
    {
        vector<vi> com(k+1,vi(k+1));
        rep(i,1,k)
        {
            rep(j,1,k)
            {
                rep(l,1,k){
                com[i][j] =  (com[i][j] + (a[i][l]*b[l][j])%mod)%mod;


                }
            }
        }
        return com;
    }
vector< vi> power(vector<vi> t,ll p)
    {
        if(p==1) return t;

        if(p&1) return mul(t,power(t,p-1));

        vector<vi> x = power(t,p/2);

        return mul(x,x);
    }




ll ans ()
    {
     vi  fi(k+1);

     ///Step 2: Initializizng F(i)

     rep(i,1,k) fi[i] = b[i-1];

     ///Step 3: Making Transition Matrix

     vector<vi > Trans(k+1,vi(k+1));

     Trans = buildTransition();

     ///Step 4: finding T^(n-1)

     Trans = power(Trans,n-1);
     rep(i,1,k){
         rep(j,1,k)
            cout<<Trans[i][j]<<" ";
            cout<<'\n';
     }
     ll req = 0;
     rep(i,1,k)
     {
        req = (req+(Trans[1][i])*(fi[i])%mod)%mod;

     }

    return req%mod;
    }


int main()
{
    ios::sync_with_stdio(false);
    ll T;
    cin>>T;
    while(T--)
    {
        cin>>k;
        b.clear();
        c.clear();
        b.resize(k);
        c.resize(k);

        rep(i,0,k-1) cin>>b[i];
        rep(i,0,k-1) cin>>c[i];

        cin>>n;

        if(n==0)
            cout<<0<<endl;
        else if(n<=k)
            cout<<b[n-1]<<endl;
        else
        {
            cout<<ans()<<endl;
        }
    }
    return 0;
}
