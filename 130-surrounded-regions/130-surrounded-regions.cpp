class Solution {
public:
    int dir[4][2] = {{0,1},{0,-1}, {1,0}, {-1,0}};

void dfs(vector<vector<char>>& grid, int r, int c){
    int n = grid.size(), m = grid[0].size();
    grid[r][c] = '#';
    for(auto[dx,dy]:dir){
        int x = r+dx, y = c+dy;
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y] != 'O') continue;
        dfs(grid, x, y);
    }
}

void solve(vector<vector<char>>& board) {
    int n = board.size(), m = board[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 or j==0 or i==n-1 or j==m-1){
                if(board[i][j] != 'O') continue;
                dfs(board, i, j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j] == 'O') board[i][j] = 'X';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j] == '#') board[i][j] = 'O';
        }
    }
}
};