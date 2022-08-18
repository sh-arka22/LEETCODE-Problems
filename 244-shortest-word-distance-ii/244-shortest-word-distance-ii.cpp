class WordDistance {
public:
    unordered_map<string,set<int>>mp;
    WordDistance(vector<string>& wordsDict) {
        int n = wordsDict.size();
        for(int i=0;i<n;i++){
            mp[wordsDict[i]].insert(i);
        }
    }
    
    int shortest(string word1, string word2) {
        int mini = INT_MAX;
        for(auto idx1:mp[word1]){
            for(auto idx2:mp[word2]){
                mini = min(mini, abs(idx1-idx2));
            }
        }
        return mini;
    }
};

/**
 * Your WordDistance object will be instantiated and called as such:
 * WordDistance* obj = new WordDistance(wordsDict);
 * int param_1 = obj->shortest(word1,word2);
 */