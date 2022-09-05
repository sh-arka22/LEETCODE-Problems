class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minProd = 1;
        int maxProd = 1;
        int maxi = -(int)2e6;
        for(auto num: nums){
            if(num<0) swap(minProd, maxProd);
            maxProd = max(num, maxProd*num);
            minProd = min(num, minProd*num);
            maxi = max(maxi, maxProd);
        }
        return maxi;
    }
};