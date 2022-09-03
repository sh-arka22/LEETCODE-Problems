class Solution {
public:
    int vis[26];
    vector<int> partitionLabels(string s) {
        int n = s.size();
        
        for(int i=0;i<n;i++){
            vis[s[i]-'a'] = i;
        }
        
        vector<int>ans;
        int len = 0, end = -1;
        for(int i=0;i<n;i++){
            len++;
            end = max(vis[s[i]-'a'],end);
            if(i==end){
                ans.push_back(len);
                len = 0;
            }
        }
        return ans;
    }
};