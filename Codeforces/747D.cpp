#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int cnt = 0;
    int arr[n+1];
    vector<int> len;
    for(int i = 0;i<n;++i)
    {
        int t;
        cin>>t;
        if(t<0) 
        {
            cnt++;
            arr[i] = 0;
        }
        else
        arr[i] = 1;
    }
     if(cnt>k)
    {
        cout<<"-1\n";
    }
    else if(cnt == n)
    {
        cout<<1<<endl;
    }
    else if(k==cnt)
    {
        cout<<cnt*2<<endl;
    }
    else
    {
       // for(int iter = 0; iter<n;++iter) cout<<arr[iter]<<" ";
        int ans = cnt*2;
        k -= cnt;
        //cout<<cnt<<endl;
        int firstcnt = 0;
        int lastcnt = 0;
        int i = 0,j=n-1;
        while(i<n && arr[i]==1) {firstcnt++; i++;}
        while(j>=0 && arr[j] == 1) {lastcnt++; j--;}
       // cout<<lastcnt<<endl;
        for( ; i<=j ;++i)
        {
            
            if(arr[i] ==1)
            {
               // cout<<i<<endl;
                int lengt = 0;
                while(arr[i] == 1 && i<=j )
                {
                    i++;
                    
                    lengt++;
                   // cout<<i<<" "<<lengt<<endl;
                }
                len.push_back(lengt);
            }
        }
        sort(len.begin(),len.end());
        //for(int iter = 0 ;iter <len.size();iter++) cout<<len[iter]<<" ";
        int vint = 0;
        while(len[vint]<=k && vint < len.size())
        {
            //cout<<"ad";
            k-= len[vint];
            ans-=2;
            vint++;
        }
        //cout<<lastcnt<<endl;
        if(k>=lastcnt && lastcnt != 0) {
            k-= lastcnt;
            ans--;
        }
        //cout<<k<<endl;
       //cout<<firstcnt<<endl;
        if(k>=firstcnt && firstcnt != 0)
        {
            k-=firstcnt;
            ans-=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}