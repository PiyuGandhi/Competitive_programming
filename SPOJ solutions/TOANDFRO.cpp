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
    ll col;
    char a[1000];
    while(1)
    {
        cin>>col;
        if(col == 0)
            break;
        cin>>a;
        ll k =0;
        for(ll i=0;i<col;i++)
        {
            k = k+1;
            ll flag = 0;
            for(ll j = i;j<strlen(a);j+=col)
            {
                if(flag == 0)
                {
                    cout<<a[j];
                    flag = 1;
                }
                else
                {
                    cout<<a[j+col-k-i];
                    flag = 0;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
