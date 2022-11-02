class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        int len = words[0].size();
        if(s.size()<len*words.size()) return {};
        map<string,int>mp;
        for(string s:words) mp[s]++;
        
        for(int i=0; i<=s.size() - len*words.size(); i++){
            map<string,int>copyMap = mp;
            for(int j=0;j<words.size();j++){
                string str = s.substr(i+j*len,len);
                if(copyMap.count(str)){
                    int cnt = copyMap[str];
                    if(cnt == 1) copyMap.erase(str);
                    else copyMap[str]--;
                }
                else break;
                if(copyMap.size()==0){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};