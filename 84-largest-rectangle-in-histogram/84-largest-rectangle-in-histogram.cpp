
class Solution {
private:
    vector<int>NSL(vector<int>& heights){
        stack<int>st;
        int n = heights.size();
        vector<int>ans(n,0);
        for(int i = 0;i<n;i++){
            while(st.size()>0 and heights[i]<=heights[st.top()])
                st.pop();
            if(st.size() == 0)
                ans[i] = 0;
            else{
                ans[i] = st.top()+1;
            }
            st.push(i);
        }
        return ans;
    }
    
    vector<int>NSR(vector<int>& heights){
        stack<int>st;
        int n = heights.size();
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 and heights[i]<=heights[st.top()])
                st.pop();
            if(st.size()==0)
                ans[i] = n-1;
            else
                ans[i] = st.top()-1;
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left = NSL(heights);
        vector<int> right = NSR(heights);
        
        int maxi = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,heights[i]*(right[i]-left[i]+1));
        }
        return maxi;
    }
};