class Solution {
public:
    int mem[100001][2][3] = {};
    int checkRecord(int n) {
        return dfs(0, 0, 0, n);   
    }

private:
    int dfs(int i, int A, int L, int n) {
        if (i == n) return 1;
        if (mem[i][A][L] != 0) return mem[i][A][L];
        long int res = dfs(i+1, A, 0, n);  // P
        if (A == 0) res += dfs(i+1, 1, 0, n); // A
        if (L < 2) res += dfs(i+1, A, L+1, n); // L
        return mem[i][A][L] = res % 1000000007;
    }
};

