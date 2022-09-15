class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;              
		if(nums[0]> nums[1]) return 0;     
        if(nums[n-1] > nums[n-2]) return n-1;    
        
        int left=0,right=nums.size()-1;
        
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1]){   
                return mid;
            }
            if(nums[mid] > nums[mid-1] && nums[mid]<nums[mid+1]){      
                left = mid+1;     
            }
            else{
				right=mid;         
            }
        }
        return -1;
    }
};