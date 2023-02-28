class Solution {
public:
    vector<int> pourWater(vector<int>& heights, int volume, int k) {
        for(int i=1; i <= volume; i++){
            int curr = k;
            while(curr>0 and heights[curr] >= heights[curr-1]) curr--;
            while(curr<size(heights)-1 and heights[curr] >= heights[curr+1]) curr++;
            while(curr>k and heights[curr] == heights[curr-1]) curr--;
            heights[curr]++;
        }
        return heights;
    }
};