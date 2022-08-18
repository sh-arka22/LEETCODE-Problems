class Solution {
    int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}};
    void dfs(vector<vector<char>>& board, int i, int j){
        board[i][j]='.';
        for(auto &[dr,dc]:dir){
            int r = i+dr, c = j+dc;
            if(r<0 or j<0 or r>=board.size() or c>=board[0].size() or board[r][c]=='.') continue;
            dfs(board, r, c);
        }
    }
    
public:
    int countBattleships(vector<vector<char>>& board) {
        if (board.size()==0) return 0;
        int count = 0;
        for (int i=0; i<board.size(); i++){
            for (int j=0; j<board[0].size();j++){
                if(board[i][j]=='X') {
                    count++;
                    dfs(board, i, j);//sink the ship
                }
            }
        }
        return count;
    }
};