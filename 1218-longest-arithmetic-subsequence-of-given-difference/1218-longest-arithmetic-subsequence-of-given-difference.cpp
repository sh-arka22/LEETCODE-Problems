class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map<int,int> mp;
        for(int it:arr){
            mp[it]= 1+mp[it-difference];
        }
        
        int max_len = 0;
        for(auto it=mp.rbegin(); it != mp.rend();it++){
            max_len= max(max_len,it->second);
        }
        
        return max_len;
    }
};