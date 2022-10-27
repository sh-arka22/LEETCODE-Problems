class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        
        
        unordered_map<long,int> map;
        long sum = 0, diff = 0; //using long data type to mitigate overflow during the subtraction/addition
        int maxSz = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            diff = sum - (long)k;
            
            if (sum == k) {
                maxSz = max(maxSz, i + 1);
            }
			
			if (map.find(diff) != map.end()) {
                maxSz = max(maxSz, i - map[diff]); // if the diff is found in the map, get the sizeof subarry and get the max
            }
            
            /*
             * add the sum to map only if it is not in the map. 
             * No new map with same sum is added, as only the first 
             * occurance can contribute towards the max subarray and
             * not the newly occured same sum.
             */
            if (map.find(sum) == map.end()) 
                map[sum] = i; 
        }
        return maxSz;
        
    }
};