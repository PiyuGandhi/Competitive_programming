#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>b;
    if(b==1 || b==2)
    {
        cout<<"-1"<<endl;
    }
    else if(b%2==0)
    {
        a = (b*b)/4  - 1;
        c = (b*b)/4 + 1;
        cout<<a<<" "<<c<<endl;
    }
    else
    {
        cout<<(b*b)/2 <<" "<< ((b*b)/2 +1)<<endl;
    }

    return 0;
}