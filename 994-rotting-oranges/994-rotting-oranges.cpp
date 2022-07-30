class Solution {
public:
    int orangesRotting(vector<vector<int>>& A) {
        queue<pair<int, int>> q;
        int M = A.size(), N = A[0].size(), step = 0, dirs[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                if (A[i][j] == 2) q.emplace(i, j);
            }
        }
        while (q.size()) {
            for (int cnt = q.size(); cnt--;) {
                auto [x, y] = q.front();
                q.pop();
                for (auto &[dx, dy] : dirs) {
                    int a = x + dx, b = y + dy;
                    if (a < 0 || a >= M || b < 0 || b >= N || A[a][b] != 1) continue;
                    A[a][b] = 2;
                    q.emplace(a, b);
                }
            }
            step++;
        }
        for (auto &row : A) {
            for (int x : row) {
                if (x == 1) return -1;
            }
        }
        return max(0, step - 1);
    }
};