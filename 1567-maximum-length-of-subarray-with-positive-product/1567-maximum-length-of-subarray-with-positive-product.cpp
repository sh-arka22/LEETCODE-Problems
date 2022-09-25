class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos_len = 0, neg_len = 0;
        int prod = 1;
        int maxLen = -1;
        for(int it:nums){
            if(it == 0){
                pos_len = 0, neg_len = 0;
            }
            else if(it>0){
                if(neg_len) neg_len++;
                pos_len ++;
            }
            else{
                swap(pos_len , neg_len);
                neg_len++;
                if(pos_len) pos_len++;
            }
            maxLen = max(maxLen, pos_len);
        }
        return maxLen;
    }
};