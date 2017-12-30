/*All men are created equal, some work harder in preseason */
/* Property Of Piyush Gandhi */
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define rep(i,j,n) for(ll i=j;i<=n;++i)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 100005
#define LIM 10000000000000000
#define SLIM 100000001
bool prime[100000001];
vi found;
void precom()
{
    //rep(i,0,SLIM-1) prime[i] = i;
    memset(prime,1,sizeof(prime));
    found.pb(2);
    for(ll i = 3; i*i <= SLIM ; i+=2 )
    {
        if(prime[i] )
        {
            found.pb(i);
            for(ll j = i*i ; j<= SLIM ; j += i)
                prime[j] = 0;
        }
    }
}
ll factorization(ll n)
{

}

int main()
{
    ios::sync_with_stdio(false);
    ll t;
    cin>>t;
    precom();
    cout<<factorization(2)<<endl;
    cout<<factorization(10)<<endl;
    cout<<factorization(20)<<endl;
    cout<<factorization(12)<<endl;
    cout<<factorization(2*5*8*7)<<endl;
   /* while(t--)
    {
        ll x;
        cin>>x;
        if(x<=SLIM) cout<<factorization(x)<<endl;
        else cout<<factorization(x)<<endl;
    }*/
    return 0;
}
