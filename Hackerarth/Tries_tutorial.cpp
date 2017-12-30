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
class TrieNode{
public:
    TrieNode(int pr)
    {
        pri= pr;
        for(int i = 0 ;i <256;++i)
            child[i] = NULL;

    }
    int pri;
    TrieNode* child[256];
};
class Trie{
private:
    TrieNode* root ;

public:
    Trie()
    {
        root = new TrieNode(1);
    }
    void insert(string word,int pr)
    {
        int n = word.size();
        TrieNode *temp = root;
        for(int i = 0 ;i <n ; ++i)
        {
            int idx = word[i];
            if(temp->child[idx])
                temp = temp->child[idx];
            else{
                temp->child[idx] = new TrieNode(pr);
                temp = temp->child[idx];
            }
        }
        //cnt++;
       // temp->value = cnt;
    }

    int  query(string s)
    {
        int n = s.size();
        TrieNode *temp = root;
        for(int i = 0 ; i<n;++i)
        {
            int idx = s[i];
            if(!temp->child[idx]) return  -1;
            else temp = temp->child[idx];
        }
        int ans = 0;
        bool flag = true;
        TrieNode *tmp2 = temp;
        tmp2->pri = INT_MIN;
        while(flag)
        {
            int cnt = 0;

           // tmp2->pri = INT_MIN;
            for(int i = 0 ; i <256 ;++i)
            {
                if(temp->child[i])
                {
                    int x = tmp2->pri;
                    int y = temp->child[i]->pri;
                    if(x<y)
                    {
                       // cout<<"haskjdgak";
                        tmp2 = temp->child[i];
                       // cout<<tmp2->pri;
                    }
                }
                else
                    cnt++;
                //cout<<cnt<<endl;
            }
            if(cnt == 255 ) flag = false;
            else
            {
                temp = tmp2;
            }
        }
        ans = temp->pri;
        return ans;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    Trie t;
    string s = "hackerearth";
   // for(int i = 0 ; i<s.size();++i) cout<<(int)s[i]<<" ";
   // t.insert("hwllo");
    t.insert("hackerearth",10);
    t.insert("hackerrank",9);
    cout<<t.query("hacker");
    return 0;
}
