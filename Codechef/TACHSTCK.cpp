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
    ll n,d;
    cin>>n>>d;
    ll length[n+1];
    rep(i,0,n-1)
    {
        cin>>length[i];
    }
    sort(length,length+n);
    ll cnt = 0;
    rep(i,1,n-1)
    {
        if(length[i] - length[i-1] <= d){
            cnt++;i++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}