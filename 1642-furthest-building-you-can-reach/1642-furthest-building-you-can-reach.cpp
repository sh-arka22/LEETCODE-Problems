class Solution {
public:
    multiset<int>st;
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        for(int i=0;i<n-1;i++){
            int diff = heights[i+1] - heights[i];
            if(diff>0){
                st.insert(diff);
            }
            if(st.size()>ladders){
                bricks -= (*st.begin());
                st.erase(st.begin());
            }
            if(bricks<0) return i;
        }
        return n-1;
    }
};