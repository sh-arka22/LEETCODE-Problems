class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        size_t m = mat.size();
        size_t n = mat[0].size();

        for (size_t row = 0; row < m; row++) {
            sortDiagonal(row, 0, mat);
        }

        for (size_t col = 0; col < n; col++) {
            sortDiagonal(0, col, mat);
        }

        return mat;
    }

    vector<int> countingSort(vector<int> nums) {
        // The problem constraints allow us to assume that
        // 1 <= mat[i][j] <= 100.
        // You should, however, confirm with the interviewer
        // that it is OK to hardcode values like this.
        int min = 1;    // You could also use: *min_element(nums.begin(), nums.end());
        int max = 100;  // You could also use: *max_element(nums.begin(), nums.end());

        // Calculate the range of values, and then create an array
        // of the size of the range.
        int len = max - min + 1;
        int count[len];
        // Tally up the values in nums.
        for (int num : nums) {
            count[num - min]++;
        }

        // Flatten the list of counts into a sorted vector.
        vector<int> sortedNums;
        for (int i = 0; i < len; i++) {
            for (int times = count[i]; times > 0; times--) {
                sortedNums.push_back(i + min);
            }
        }

        return sortedNums;
    }

    // sort the current diagonal
    void sortDiagonal(size_t row, size_t col, vector<vector<int>>& mat) {
        size_t m = mat.size();
        size_t n = mat[0].size();

        // store the current diagonal values into a vector
        vector<int> diagonal;

        size_t diagonal_length = min(m - row, n - col);
        for (size_t i = 0; i < diagonal_length; i++) {
            diagonal.push_back(mat[row + i][col + i]);
        }

        // sort the vector of diagonal values
        sort(diagonal.begin(), diagonal.end());

        // build the output for the current diagonal
        for (size_t i = 0; i < diagonal_length; i++) {
            mat[row + i][col + i] = diagonal[i];
        }
    }
};