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
    ll t;
    cin>>t;
    while(t--)
    {
        char s[404];
        gets(s);
        stack<char> st;
        for(ll i=0;i<strlen(s);++i)
        {
            if(isalpha(s[i]))
            {
                cout<<s[i];
            }
            else if(s[i]==')')
            {
                cout<<st.top();st.pop();
            }
            else if(s[i]!='(')
            {
                st.push(s[i]);
            }
        }
        cout<<'\n';
    }
    return 0;
}
