#include<bits/stdc++.h>

using namespace std;

#define ll long long

class BinaryCode
{
    public:
    vector<string> decode(string message)
    {
        vector<string> ans;
        int n = message.length();
        string s1(n,'0'),s2(n,'0');
        s1[0]='0';
        s2[0]='1';
        bool flag1 = true,flag2 = true;
        if(n>1){
        s1[1] =  (message[0]-'0') - (s1[0] - '0') + '0';
        s2[1] =  (message[0]-'0')-  (s2[0]-'0') + '0';}
        else{
            if(s1[0]!=message[0]) flag1 = 0;
            if(s2[0]!=message[0]) flag2 = 0;
        }
        for(int i = 2;i<n;++i)
        {
            s1[i] = ((message[i-1] - '0') - (s1[i-1] - '0') - (s1[i-2] - '0' )) + '0';
            s2[i] = ((message[i-1] - '0')  - (s2[i-1] - '0' ) - (s2[i-2] - '0')) + '0';            
       }
       for(int i = 0;i<n;++i)
       {
           if(s1[i]<'0' || s1[i]>'1') flag1 = false;
           if(s2[i] <'0' || s2[i] >'1') flag2 = false;
       }
       if(flag1 == false) ans.push_back("NONE"); else ans.push_back(s1);
       if(flag2 == false) ans.push_back("NONE"); else ans.push_back(s2); 
        return ans;
        
    }

};
