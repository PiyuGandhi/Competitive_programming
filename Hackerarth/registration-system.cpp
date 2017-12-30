#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    unordered_map<string,int> m;
    unordered_set<string> st;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(st.find(s)==st.end())
        {
            st.insert(s);
            cout<<s<<endl;
            m[s] = 0;
        }
        else
        {
            int j = m[s];
            for( ; ; j++ )
            {
                if(st.find(s+to_string(j))==st.end())
                {
                    s+= to_string(j);
                    m[s] = 0;
                    cout<<s<<endl;
                    st.insert(s);
                    break;
                }
                else
                    m[s] = j;
            }
        }
    }
    return 0 ;
}
