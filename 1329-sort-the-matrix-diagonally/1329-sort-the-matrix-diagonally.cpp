class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        // Store the matrix dimensions
        size_t m = mat.size();
        size_t n = mat[0].size();

        // create a hasmap of min-heaps to store the diagonals
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> diagonals;

        // Insert the values into the Hash Map
        for (size_t row = 0; row < m; row++) {
            for (size_t col = 0; col < n; col++) {
                // Observing that on each diagonal, the differences between the row and column
                // indices of each element is the same.
                // Hence we can use row - col as the key to collect elements on the same diagonal.
                diagonals[row - col].push(mat[row][col]);
            }
        }

        // Take values back out of the Hash Map
        for (size_t row = 0; row < m; row++) {
            for (size_t col = 0; col < n; col++) {
                mat[row][col] = diagonals[row - col].top();
                diagonals[row - col].pop();
            }
        }

        return mat;
    }
};