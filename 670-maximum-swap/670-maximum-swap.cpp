class Solution {
public:
    int maximumSwap(int num) {
        
        string nums = to_string(num);
        int n = nums.size();
        vector<int>rightMaxIdx(n);
        rightMaxIdx[n-1] = n-1;
        char prevmax = nums[n-1]; 
        for(int i=n-2;i>=0;i--){
            if(nums[i]>prevmax){
                prevmax = nums[i];
                rightMaxIdx[i] = i;
            }
            else rightMaxIdx[i] = rightMaxIdx[i+1];
        }
        for(auto it:rightMaxIdx) cout<<it<<" ";
        for(int i=0;i<n;i++){
            if(nums[i]<nums[rightMaxIdx[i]]){
                swap(nums[i],nums[rightMaxIdx[i]]);
                break;
            }
        }
        return stoi(nums);
    }
};