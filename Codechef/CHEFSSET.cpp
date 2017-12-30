#include "bits/stdc++.h"
using namespace std;
const int N = 1e6 + 6;
int t;
int n;
int arr[N];
int spf[N];
map < int , int > mp;
void pre()
{
    for(int i = 2 ; i * i < N ; ++i){
        if(!spf[i])
        {
            for(int j = i * i ; j < N ; j += i)
            {
                if(!spf[j])
                {
                    spf[j] = i;
                }
            }
        }
    }
    for(int i = 1 ; i < N ; ++i)
    {
        if(!spf[i])
        {
            spf[i] = i;
        }
    }
}
void reduce(int x)
{
    int last = spf[x];
    int cnt = 0;
    while(x > 1)
    {
        int cur = spf[x];
        x /= cur;
        if(cur == last)
        {
            ++cnt;
        }
        else
        {
            if(cnt & 1)
            {
                ++mp[last];
            }
            last = cur;
            cnt = 1;
        }
    }
    if(cnt & 1)
    {
        ++mp[last];
    }
}
int main()
{
    pre();
    scanf("%d" , &t);
    while(t--)
    {
        scanf("%d" , &n);
        mp.clear();
        for(int i = 1 ; i <= n ; ++i)
        {
            scanf("%d" , arr + i);
            reduce(arr[i]);
        }
        int ans = 0;
        for(auto it : mp)
        {
            ans += min(it.second , n - it.second);
        }
        printf("%d\n" , ans);
    }
} 