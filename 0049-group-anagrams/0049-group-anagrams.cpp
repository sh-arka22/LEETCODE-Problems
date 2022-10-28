class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        
        for(string s:strs){
            string key = s;
            sort(begin(key),end(key));
            mp[key].push_back(s);
        }
        
        vector<vector<string>> ans;
        for(pair<string,vector<string>>p : mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};