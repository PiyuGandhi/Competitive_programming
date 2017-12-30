/* All men are created equal,
   Some work harder in preseason */
/*Property Of Piyush Gandhi*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,j,n) for(ll i=j;i<=n;i+=1)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define pb push_back
#define mp make_pair

int main()
{
    ios::sync_with_stdio(false);
    ll n,codd=0,ceven=0,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%2) codd++;
        else ceven++;
    }
    if(codd<ceven) cout<<"READY FOR BATTLE"<<endl;
    else cout<<"NOT READY"<<endl;
    return 0;
}
