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

struct hero{
string name ;
ll a;
ll s;
ll st;
};
bool compare(hero x,hero y)
{
    if(x.a == y.a)
    {
        if(x.s == y.s)
        {
            if(x.st == y.st)
                return x.name < y.name;
            else
                return x.st < y.st;
        }
        else
            return x.s > y.s;
    }
    else
        return x.a > y.a;
}
int main()
{
    ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    vector<hero> v(n);
    hero temp;
    rep(i,0,n-1)
    {
        cin>>temp.name>>temp.a>>temp.s>>temp.st;
        v.pb(temp);
    }
    sort(v.begin(),v.end(),compare);
    rep(i,0,n-1)
        cout<<v[i].name<<endl;
    return 0;
}
