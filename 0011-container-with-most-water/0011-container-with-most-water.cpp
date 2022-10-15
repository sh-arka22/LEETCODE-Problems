class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxi = 0;
        while(l<r){
            maxi = max(maxi, min(height[l], height[r])*(r-l));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxi;
    }
};