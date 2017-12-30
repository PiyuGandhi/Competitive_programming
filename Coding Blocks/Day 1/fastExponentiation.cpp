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

ll power(ll x,ll n)
{
    if(n==0) return 1;
    if(n%2==0)return power(x,n/2)*power(x,n/2);
    else return x*power(x,n/2)*power(x,n/2);
}
int main()
{
    ios::sync_with_stdio(false);
    cout<<pow(2,15);
    return 0;
}
