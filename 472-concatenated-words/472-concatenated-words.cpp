class Solution {
public:
    unordered_set<string>st;
    
    bool dfs(string &word, int idx, string curr){
        if(idx == word.size() and st.count(curr)) return 1;
        if(idx == word.size() and !st.count(curr)) return 0;
        bool flag;
        if(st.count(curr)){
            string x = "";
            x+=word[idx];
            curr+=word[idx];
            flag = dfs(word, idx+1, x) or dfs(word, idx+1, curr);
        }
        else{
            flag = dfs(word, idx+1, curr+word[idx]);
        }
        return flag;
    }
    
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        for(auto it:words) st.insert(it);
        
        vector<string> ans;
        for(auto word:words){
            st.erase(word);
            if(dfs(word, 0, ""))
                ans.push_back(word);
            st.insert(word);
        }
        return ans;
    }
};