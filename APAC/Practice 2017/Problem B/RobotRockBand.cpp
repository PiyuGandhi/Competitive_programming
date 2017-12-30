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
    freopen("B-large-practice.in","r",stdin);
      freopen("out.txt","w",stdout);
    //ios::sync_with_stdio(false);
      int T;
      cin>>T;
      rep(t,1,T)
      {
          int n,k;
          cin>>n>>k;
          int a[n+1],b[n+1],c[n+1],d[n+1];
          rep(i,0,n-1) cin>>a[i];
          rep(i,0,n-1) cin>>b[i];
          rep(i,0,n-1) cin>>c[i];
          rep(i,0,n-1) cin>>d[i];
          map<int,ll> m;
          rep(i,0,n-1)
            rep(j,0,n-1)
                m[c[i]^d[j]]++;
          ll ans = 0 ;
          rep(i,0,n-1)
          {
              rep(j,0,n-1)
              {
                  if(m.find(a[i]^b[j]^k) != m.end())
                    ans += m[a[i]^b[j]^k];
              }
          }
          cout<<"Case #"<<t<<": "<<ans<<endl;
      }
    return 0;
}
