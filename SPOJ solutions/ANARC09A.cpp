#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll i=1;
    while(1)
    {
        string s;
        cin>>s;
        if(s[0]=='-') break;
        stack<char> st;
        ll ans=0;
        for(int i = 0;i<s.length();++i)
        {
            if(s[i] == '{')
            {
             st.push();
            }
            else
            {
                if(st.empty()) {ans++;st.push('{'); }
                else
                {
                    st.pop();
                }
            }
        }
        i+=1;
        if(st.empty()) cout<<i<<". "<<ans<<endl;
        else cout<<i<<". "<<ans+st.size()/2<<endl;
    }
    return 0;
}
