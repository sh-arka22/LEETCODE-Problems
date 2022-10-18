class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        long el1 = -(int)1e9-1, el2 = -(int)1e9-1;
        int cn1 = 0, cn2 = 0;
        
        for(int n:nums){
            if(el1 == n){
                cn1++;
            }
            else if(el2 == n){
                cn2++;
            }
            else if(cn1 == 0){
                el1 = n;
                cn1++;
            }
            else if(cn2 == 0){
                el2 = n;
                cn2++;
            }
            else{
                cn1--;
                cn2--;
            }
        }
        cn1 = cn2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1)
                cn1 += 1;
            if(nums[i]==el2)
                cn2 += 1;
        }
        
        if(cn1>n/3) ans.push_back(el1);
        if(cn2>n/3) ans.push_back(el2);
        
        return ans;
    }
};