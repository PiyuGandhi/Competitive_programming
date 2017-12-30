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
    ll a,b,c;
    cin>>a>>b>>c;
    while(1)
    {
        if(a==0 && b==0 && c==0) break;
        if((c-b) == (b-a))
        {
            cout<<"AP"<<" "<<c+(c-b)<<endl;
        }
        else
        {
            cout<<"GP"<<" "<<c*(c/b)<<endl;
        }
        cin>>a>>b>>c;
    }
    return 0;
}
