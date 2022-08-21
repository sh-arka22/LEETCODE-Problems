class Solution {
public:
    int dir[8][2] = {{0,1},{0,-1},{1,1},{1,-1},{1,0},{-1,0},{-1,1},{-1,-1}};
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                int live=0;
                
                for(auto &[dr,dc]:dir){
                    int r = i+dr, c = j+dc;
                    if(r<0 or c < 0 or r>= n or c>=m) continue;
                    if(abs(board[r][c]) == 1) live++;
                }
                
                if(board[i][j] == 1 and (live < 2 or live > 3)) board[i][j] = -1;
                
                if(board[i][j] == 0 and live == 3) board[i][j] = 2;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] >= 1)
                    board[i][j] = 1;
                else board[i][j] = 0;
            }
        }
    }
};