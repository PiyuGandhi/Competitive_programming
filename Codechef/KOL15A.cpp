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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll sum=0;
        rep(i,0,s.length()-1){
        if(s[i]>='0'&&s[i]<='9')
        {
            sum+=(s[i]-'0');
        }
        }
        cout<<sum<<endl;
    }
    return 0;
}
