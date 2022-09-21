class Solution {
bool ispossible(vector<int> &nums , int maxOperations , int mid )
{
    int total =0;
    for( int i=0 ;i<nums.size() ;i++)
    {
        if(nums[i]%mid==0)
        {
            total += nums[i]/mid -1;
        }
        else{
            total += nums[i]/mid;
        }
    }
    if(total <= maxOperations) return true;
    return false;
}


public:
int minimumSize(vector<int>& nums, int maxOperations) {
    int start = 1;
    int end = INT_MAX;
    for( int i=0 ; i<nums.size() ;i++)
    {
        end = max(end , nums[i]);
    }
    
    int ans = 0;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(ispossible(nums, maxOperations , mid))
        {
            ans = mid;
            end  = mid-1;
            
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
};