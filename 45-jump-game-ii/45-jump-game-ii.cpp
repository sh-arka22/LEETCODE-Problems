class Solution {
public:
 
   int jump(vector<int> &nums , int curr, int dest,vector<int> &dp)
    {       
            if(curr==dest) return 0;
            if(dp[curr]!=-1) return dp[curr];
            //cout<<curr<<" ";
            int tmp=(int)1e9;
     
            for(int i=1;i<=nums[curr];i++)
            {   if(i+curr>dest) continue;
                tmp=min(tmp,1+jump(nums,curr+i,dest,dp));  
            }
         dp[curr]=tmp;
         return tmp;  
    }
    
    int jump(vector<int>& nums) {
         vector<int> dp(nums.size(),-1);
         return jump(nums,0,nums.size()-1,dp);
    }
};