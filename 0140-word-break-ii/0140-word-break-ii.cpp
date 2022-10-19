class Solution {
public:
    vector<string> ans;
    
    class Trie{
      public:
        Trie* child[26];
        bool isEnd=false;
    };
    
    void insert(string& word, Trie* root){
        Trie *cur = root;
        for(auto &ch : word){
            if(cur->child[ch-'a']==NULL) cur->child[ch-'a'] = new Trie();
            cur = cur->child[ch-'a'];
        }
        cur->isEnd = true;
    }
    
    bool search(string& word, Trie* root){
        Trie *cur = root;
        for(auto &ch : word){
            if(cur->child[ch-'a']==NULL) return false;
            cur = cur->child[ch-'a'];
        }
        return cur->isEnd;
    }
    
    void dfs(string &s, int idx, Trie *root, string curStr){
        if(idx == s.size()){
            ans.push_back(curStr.substr(0,0+curStr.size()-1));   //before pushing in vector remove the extra-space in the last of the string 
            return;
        }
        string str="";
        for(int i=idx; i<s.size(); ++i){
            str.push_back(s[i]);
            if(search(str,root)) dfs(s,i+1,root, curStr+str+" ");
        }
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        Trie *root = new Trie();
        for(auto &word : wordDict){
            insert(word,root);
        }
        dfs(s,0,root,"");
        return ans;
    }
};