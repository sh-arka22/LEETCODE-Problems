class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        
        int n = nums.size();
        vector<int> res(n,0);
        int i=1;
        int j = n-1;
        while(i<n){
            res[i] = nums[j];
            i+=2;
            j--;
        }
        
        i=0;
        while(j>=0){
            res[i] = nums[j];
            i+=2;
            j--;
        }
        nums = res;
        // nums.assign(res.begin(), res.end());
        // copy(res.begin(), res.end(), back_inserter(nums));
    }
};