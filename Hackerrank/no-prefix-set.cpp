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

class TrieNode
{
public:
    TrieNode()
    {
        for(int i =0 ;i <10 ;++i)
            child[i] = NULL;
    }
    TrieNode* child[10];
};

class Trie
{
private:
    TrieNode* root;
public:
    Trie()
    {
        root = new TrieNode();
    }
    void add(string word)
    {
        int n = word.size();
        TrieNode *temp = root;
        for(int i = 0 ; i <n;++i)
        {
            int idx = word[i] - 'a';
            if(!temp->child[idx])
                temp->child[idx] = new TrieNode();
            temp = temp->child[idx];
        }
    }
    int query(string word)
    {
        int n = word.size();
        TrieNode *temp = root;
        for(int i = 0 ;i<n;++i)
        {
            int idx = word[i] - 'a';
            if(!temp->child[idx]) return 0;
            temp = temp->child[idx];
        }
        return 1;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    string s;
    Trie tr;
    while(t--)
    {
        cin>>s;
        if(tr.query(s))
        {
            cout<<"BAD SET\n"<<s<<endl;
            return 0;
        }
        else
            tr.add(s);
    }
    cout<<"GOOD SET"<<endl;
    return 0;
}
