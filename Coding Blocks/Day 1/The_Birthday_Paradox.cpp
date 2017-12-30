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
#define days 365.0
#define prob (1.0 - 1/days)
class Paradox{
public:
  ll min_people(double n)
  {
      ll cnt = 0;
      double res = 1.0;
      n = 1 - n;
      while(res > n)
      {
          res*=prob;
          cnt++;

      }
      rep(i,1,cnt-1)
      if((i*(i-1)/2) >= cnt) {cout<<i<<endl;break;}
  }

};

int main()
{
    ios::sync_with_stdio(false);
    Paradox P;
    P.min_people(0.5);
    P.min_people(0.99999999999);
    return 0;
}
