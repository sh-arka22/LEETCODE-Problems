class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        
        int low = 0, high = m;
        while(low < high){
            int mid = low + (high - low)/2;
            
            //finding maximum element of the row
            int mx = max_element(mat[mid].begin(), mat[mid].end()) - mat[mid].begin();
            
            //if mid == 0, only one row exist in [low,high) range, so maximum of that row will be answer
            if(mid == 0) return {mid, mx};

            // checking whether this is the peak element, 
            // (mid == m-1 || mat[mid][mx] > mat[mid+1][mx]) handles cornes case of mid is last row
            else if(mat[mid][mx] > mat[mid-1][mx] && (mid == m-1 || mat[mid][mx] > mat[mid+1][mx]) ){
                return {mid, mx};
            }
            else if(mat[mid-1][mx] > mat[mid][mx]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        
        return {0,0};
    }
};