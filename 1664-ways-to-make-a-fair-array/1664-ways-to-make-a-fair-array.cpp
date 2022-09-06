class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        int odd[n];
        int even[n];
        
        int oddSum = 0;
        int evenSum = 0;
        
        for(int i=0;i<n;i++){
            if(i%2==0){
                evenSum += nums[i];
            }
            else oddSum += nums[i];
            
            odd[i] = oddSum;
            even[i] = evenSum;
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            if(i==0){
                int nos = even[n-1] - nums[0];
                int nes = odd[n-1];
                
                if(nos == nes) ans++;
                continue;
            }
            
            int nes = even[i-1]+ (odd[n-1] - odd[i]);
            int nos = odd[i-1]+ (even[n-1] - even[i]);
            if(nes == nos) ans++;
        }
        
        return ans;
    }
};