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
    set< int >  st;
    int arr[] = {1,2,2,2,2,3,3,3,3,4,4,4,4,4,44,5};
    int n = sizeof(arr)/arr[0];
    rep(i,0,16-1) st.insert(arr[i]);
    /*for(set<int>::iterator it = st.begin();it!= st.end(); it++) cout<<*it<<endl;
    */
    ///Multiset: Allows multiple entries
    multiset<int> ms;
    rep(i,0,16-1) ms.insert(arr[i]);
   ms.erase(3);
    for(multiset<int>::iterator it = ms.begin();it!=ms.end();it++){ cout<<*it<<endl;}

    return 0;
}
