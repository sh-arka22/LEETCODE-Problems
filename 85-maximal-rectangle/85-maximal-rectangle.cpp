class Solution {
private:
int largestRectangleArea(vector < int > & heights) {
    int n = heights.size();
    stack < int > st;
    int leftsmall[n], rightsmall[n];
    for (int i = 0; i < n; i++) {
    while (!st.empty() && heights[st.top()] >= heights[i]) {
            st.pop();
        }
        if (st.empty())
            leftsmall[i] = 0;
        else
            leftsmall[i] = st.top() + 1;
            st.push(i);
    }
    // clear the stack to be re-used
    while (!st.empty())
    st.pop();

    for (int i = n - 1; i >= 0; i--) {
    while (!st.empty() && heights[st.top()] >= heights[i])
      st.pop();

    if (st.empty())
      rightsmall[i] = n - 1;
    else
      rightsmall[i] = st.top() - 1;

    st.push(i);
    }
    int maxA = 0;
    for (int i = 0; i < n; i++) {
    maxA = max(maxA, heights[i] * (rightsmall[i] - leftsmall[i] + 1));
    }
    return maxA;
}
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>mat(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j] = (matrix[i][j] == '1');
            }
        }
        vector<int>heights(m,0);
        int maxArea = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j])
                    heights[j]++;
                else heights[j] = 0;
            }
            int area = largestRectangleArea(heights);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};