class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos_len = 0, neg_len = 0, ans = 0;
        for(int el:nums){
            if(el == 0){
                pos_len = 0, neg_len = 0;
            }
            else if(el>0){
                pos_len ++;
                neg_len = neg_len == 0 ? 0 : neg_len+1;
            }
            else{
                int tmp = pos_len;
                pos_len = neg_len == 0 ? 0 : neg_len+1;
                neg_len = tmp+1;
            }
            ans = max(ans,pos_len);
        }
        return ans;
    }
};