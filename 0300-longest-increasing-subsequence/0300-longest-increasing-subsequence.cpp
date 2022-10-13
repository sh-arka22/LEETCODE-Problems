class Solution {
private:
   int search(vector<int>& nums){
       int n = nums.size();
       vector<int>tmp;
       int len = 1;
       tmp.push_back(nums[0]);
       for(int i=1;i<n;i++){
           if(nums[i]>tmp.back()) {
               tmp.push_back(nums[i]);
               len++;
           }
           else{
               int idx = lower_bound(tmp.begin(), tmp.end(), nums[i]) - tmp.begin();
               tmp[idx] = nums[i];
           }
       }
       return len;
   } 
public:
    int lengthOfLIS(vector<int>& nums) {
        return search(nums);
    }
};