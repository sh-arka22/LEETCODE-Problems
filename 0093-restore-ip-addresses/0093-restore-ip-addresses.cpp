class Solution {
private:
    void helper(string &str, vector<string>&ans, string curr, int idx, int cnt){
        if(idx >= str.size() or cnt <= 0){
            if(idx == str.size() and cnt == 0){
                curr.pop_back();
                ans.push_back(curr);
                return;
            }
            return;
        }
        
        for(int i = 1;i<=3;i++){
            string first = str.substr(idx,i);
            if(first.size()>1 and first.front() == '0') continue;
            int num = stoi(first);
            if(num>=0 and num<=255){
                helper(str, ans, curr+first+".", idx+i, cnt-1);
            }
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        helper(s, ans, "", 0, 4);
        return ans;
    }
};