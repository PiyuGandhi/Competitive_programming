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
#define MAX 1000000000
#define SIZE 32000
bool prime[SIZE+5];
vi stored_primes;
void prime_gen()
{
    memset(prime,true,sizeof(prime));
    prime[1]=prime[0]=false;
    rep(i,2,SIZE)
    {
        if(prime[i]==true)
        {
            stored_primes.pb(i);
            for(ll j=i+i;j<=SIZE;j+=i)
                prime[j]=false;
        }
    }
}

void print_prime(ll m,ll n)
{
	if(m<2) m=2;
	ll top = sqrt(n)+1;
	set<ll> ans;
	for(ll i=0;i<stored_primes.size();++i)
	{
		if(stored_primes[i]>=top) break;
		ll start;
		if(stored_primes[i]>=m) start = stored_primes[i]*2;
		else start = m + ((stored_primes[i] - m%stored_primes[i])%stored_primes[i]);
		for(ll j=start;j<=n;j+=stored_primes[i])
		{
			ans.insert(j);
		}
	}
	for(ll i=m;i<=n;++i)
	{
		if(ans.count(i)==0) cout<<i<<endl;
	}


}
int main()
{
    ios::sync_with_stdio(false);
    ll t,n,m;
    prime_gen();
    cin>>t;
    while(t--)
    {
        cin>>m>>n;

        print_prime(m,n);
        cout<<endl;
    }
    return 0;
}
