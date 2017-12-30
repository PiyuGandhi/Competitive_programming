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
    freopen("lazy_loading.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int T;
    cin>>T;
    rep(t,1,T)
    {
        ll n;
        cin>>n;
        ll arr[n];
        rep(i,0,n-1)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans = 0;
        for(ll i = 0,j = n-1;i<j;)
        {
            if(arr[j]>50)
            {
                j--;
                ans++;
                //cout<<arr[j]<<endl;
            }
            else
            {
                ll temp = arr[j];
                while(temp<=50 && i<j)
                {
                    temp+=arr[j];
                    i++;
                }
                if(temp>=50){
                //cout<<temp<<endl;
                ans++;}
                j--;
            }
        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }
    return 0;
}
