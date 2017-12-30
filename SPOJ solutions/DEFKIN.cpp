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
    ll t;
    cin>>t;
    while(t--)
    {
        ll h,w,n;
        cin>>w>>h>>n;
        ll length[n];
        ll breadth[n];
        ll max_length = 0,max_breadth = 0;
        if(n==0)
        {
            cout<<h*w<<endl;
            continue;
        }
        rep(i,0,n-1)
        {
            cin>>length[i]>>breadth[i];
        }
        sort(length,length+n);
        sort(breadth,breadth+n);
        max_length = length[0];
        max_breadth = breadth[0];
        rep(i,1,n-1)
        {
            max_length = max(max_length,length[i] - length[i-1]);
            max_breadth = max(max_breadth , breadth[i] -  breadth[i-1]);
        }
        max_length = max(max_length,w - length[n-1] + 1);
        max_breadth = max(max_breadth, h - breadth[n-1] + 1);
        cout<<(max_length - 1)*( max_breadth - 1)<<endl;
    }
    return 0;
}
