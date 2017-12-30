#include<bits/stdc++.h>

using namespace std;

class ABBA
{
    public:
     string canObtain(string initial, string target)
     {
         while(initial.length() < target.length())
         {
             if( target[target.length()-1] == 'A')
             {
                 target = target.substr(0,target.length()-1);
             }
             else if(target[target.length()-1] == 'B')
             {
                 target = target.substr(0,target.length()-1);
                 reverse(target.begin(),target.end());
             }
         }
         if(target == initial) return "Possible";
         else return "Impossible";
     }
};