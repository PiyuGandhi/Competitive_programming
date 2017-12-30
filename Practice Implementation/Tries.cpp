#include<bits/stdc++.h>

using namespace std;

class TrieNode{
public:
    TrieNode()
    {
        value = 0;
        for(int i =0 ;i<26;++i)
        {
            child[i] = NULL;
        }
    }
    int value;
    TrieNode* child[26];
};

class Trie{
private:
    TrieNode* root;
    int cnt;
public:
    Trie()
    {
        root = new TrieNode();
        cnt = 0;
    }
    void insert(string word)
    {
        int n = word.size();
        TrieNode *temp = root;
        for(int i = 0 ;i <n ; ++i)
        {
            int idx = word[i] - 'a';
            if(temp->child[idx])
                temp = temp->child[idx];
            else{
                temp->child[idx] = new TrieNode();
                temp = temp->child[idx];
            }
        }
        cnt++;
        temp->value = cnt;
    }
    bool search(string word)
    {
        int n = word.size();
        TrieNode *temp = root;
        for(int i = 0 ;i <n;++i)
        {
            int idx  = word[i] - 'a';
            if(! temp->child[idx]) return false;
            else temp = temp->child[idx];
        }
        if(temp->value != 0) return true;
        else return false;
    }
    bool prefixExist(string word)
    {
        int n = word.size();
        TrieNode *temp = root;
        for(int i = 0;i<n;++i)
        {
            int idx = word[i] - 'a';
            if(! temp->child[idx]) return false;
            else temp = temp->child[idx];
        }
        if(temp->value ==0)
        return true;
        else return 0;
    }
};

int main()
{
    Trie t;
    t.insert("hackerearth");
    t.insert("world");
    if(t.search("hackerearth")) cout<<"hell exists"<<endl;
    else cout<<"No hell\n";
    if(t.prefixExist("hell")) cout<<"prefix hell\n";
    if(t.prefixExist("world")) cout<<"prefix world\n";
    return 0;
}
