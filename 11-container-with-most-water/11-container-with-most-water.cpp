class Solution {
public:
    int maxArea(vector<int>& ht) {
        int i = 0, j = ht.size()-1;
        int water = 0;
        while(i<j){
            int h = min(ht[i],ht[j]);
            water = max(water, h*(j-i));
            if(ht[i]<ht[j]) i++;
            else j--;
        }
        return water;
    }
};