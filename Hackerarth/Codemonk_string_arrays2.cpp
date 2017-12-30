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
      string temp =s;
      reverse(s.begin(),s.end());
      if(temp==s)
      {
          if(s.length()%2==0) cout<<"YES EVEN"<<endl;
          else cout<<"YES ODD"<<endl;
      }
      else
        cout<<"NO"<<endl;
   }
    return 0;
}
