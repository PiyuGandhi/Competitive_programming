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
    ll n,k;
    cin>>n>>k;
    ll total=0;
    vector<bool> arr(n+1,false);
    while(k--)
    {
        string inp;
        cin>>inp;
        if(inp=="CLOSEALL")
        {
            total=0;
            rep(i,1,n) arr[i]=false;
        }
        else
        {
            ll x;
            cin>>x;
            if(arr[x]) {total--;arr[x]=false;}
            else{total++;arr[x]=true;}
        }
        cout<<total<<endl;
    }
    return 0;
}
